/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkFunctionParserWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkFunctionParserWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkFunctionParserWrap::ptpl;

VtkFunctionParserWrap::VtkFunctionParserWrap()
{ }

VtkFunctionParserWrap::VtkFunctionParserWrap(vtkSmartPointer<vtkFunctionParser> _native)
{ native = _native; }

VtkFunctionParserWrap::~VtkFunctionParserWrap()
{ }

void VtkFunctionParserWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkFunctionParserWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkFunctionParser").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("FunctionParser").ToLocalChecked(),tpl->GetFunction());
}

void VtkFunctionParserWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFunction", GetFunction);
	Nan::SetPrototypeMethod(tpl, "getFunction", GetFunction);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfScalarVariables", GetNumberOfScalarVariables);
	Nan::SetPrototypeMethod(tpl, "getNumberOfScalarVariables", GetNumberOfScalarVariables);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVectorVariables", GetNumberOfVectorVariables);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVectorVariables", GetNumberOfVectorVariables);

	Nan::SetPrototypeMethod(tpl, "GetReplaceInvalidValues", GetReplaceInvalidValues);
	Nan::SetPrototypeMethod(tpl, "getReplaceInvalidValues", GetReplaceInvalidValues);

	Nan::SetPrototypeMethod(tpl, "GetReplacementValue", GetReplacementValue);
	Nan::SetPrototypeMethod(tpl, "getReplacementValue", GetReplacementValue);

	Nan::SetPrototypeMethod(tpl, "GetScalarResult", GetScalarResult);
	Nan::SetPrototypeMethod(tpl, "getScalarResult", GetScalarResult);

	Nan::SetPrototypeMethod(tpl, "GetScalarVariableName", GetScalarVariableName);
	Nan::SetPrototypeMethod(tpl, "getScalarVariableName", GetScalarVariableName);

	Nan::SetPrototypeMethod(tpl, "GetScalarVariableValue", GetScalarVariableValue);
	Nan::SetPrototypeMethod(tpl, "getScalarVariableValue", GetScalarVariableValue);

	Nan::SetPrototypeMethod(tpl, "GetVectorVariableName", GetVectorVariableName);
	Nan::SetPrototypeMethod(tpl, "getVectorVariableName", GetVectorVariableName);

	Nan::SetPrototypeMethod(tpl, "InvalidateFunction", InvalidateFunction);
	Nan::SetPrototypeMethod(tpl, "invalidateFunction", InvalidateFunction);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsScalarResult", IsScalarResult);
	Nan::SetPrototypeMethod(tpl, "isScalarResult", IsScalarResult);

	Nan::SetPrototypeMethod(tpl, "IsVectorResult", IsVectorResult);
	Nan::SetPrototypeMethod(tpl, "isVectorResult", IsVectorResult);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllVariables", RemoveAllVariables);
	Nan::SetPrototypeMethod(tpl, "removeAllVariables", RemoveAllVariables);

	Nan::SetPrototypeMethod(tpl, "RemoveScalarVariables", RemoveScalarVariables);
	Nan::SetPrototypeMethod(tpl, "removeScalarVariables", RemoveScalarVariables);

	Nan::SetPrototypeMethod(tpl, "RemoveVectorVariables", RemoveVectorVariables);
	Nan::SetPrototypeMethod(tpl, "removeVectorVariables", RemoveVectorVariables);

	Nan::SetPrototypeMethod(tpl, "ReplaceInvalidValuesOff", ReplaceInvalidValuesOff);
	Nan::SetPrototypeMethod(tpl, "replaceInvalidValuesOff", ReplaceInvalidValuesOff);

	Nan::SetPrototypeMethod(tpl, "ReplaceInvalidValuesOn", ReplaceInvalidValuesOn);
	Nan::SetPrototypeMethod(tpl, "replaceInvalidValuesOn", ReplaceInvalidValuesOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFunction", SetFunction);
	Nan::SetPrototypeMethod(tpl, "setFunction", SetFunction);

	Nan::SetPrototypeMethod(tpl, "SetReplaceInvalidValues", SetReplaceInvalidValues);
	Nan::SetPrototypeMethod(tpl, "setReplaceInvalidValues", SetReplaceInvalidValues);

	Nan::SetPrototypeMethod(tpl, "SetReplacementValue", SetReplacementValue);
	Nan::SetPrototypeMethod(tpl, "setReplacementValue", SetReplacementValue);

	Nan::SetPrototypeMethod(tpl, "SetScalarVariableValue", SetScalarVariableValue);
	Nan::SetPrototypeMethod(tpl, "setScalarVariableValue", SetScalarVariableValue);

	Nan::SetPrototypeMethod(tpl, "SetVectorVariableValue", SetVectorVariableValue);
	Nan::SetPrototypeMethod(tpl, "setVectorVariableValue", SetVectorVariableValue);

}

void VtkFunctionParserWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkFunctionParser> native = vtkSmartPointer<vtkFunctionParser>::New();
		VtkFunctionParserWrap* obj = new VtkFunctionParserWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkFunctionParserWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFunctionParserWrap::GetFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunction();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkFunctionParserWrap::GetNumberOfScalarVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfScalarVariables();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionParserWrap::GetNumberOfVectorVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfVectorVariables();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionParserWrap::GetReplaceInvalidValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplaceInvalidValues();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionParserWrap::GetReplacementValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetReplacementValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionParserWrap::GetScalarResult(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarResult();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionParserWrap::GetScalarVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarVariableName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::GetScalarVariableValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarVariableValue(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetScalarVariableValue(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::GetVectorVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVectorVariableName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::InvalidateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvalidateFunction();
}

void VtkFunctionParserWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::IsScalarResult(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsScalarResult();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionParserWrap::IsVectorResult(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsVectorResult();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkFunctionParserWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	vtkFunctionParser * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkFunctionParserWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkFunctionParserWrap *w = new VtkFunctionParserWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkFunctionParserWrap::RemoveAllVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllVariables();
}

void VtkFunctionParserWrap::RemoveScalarVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveScalarVariables();
}

void VtkFunctionParserWrap::RemoveVectorVariables(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveVectorVariables();
}

void VtkFunctionParserWrap::ReplaceInvalidValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceInvalidValuesOff();
}

void VtkFunctionParserWrap::ReplaceInvalidValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ReplaceInvalidValuesOn();
}

void VtkFunctionParserWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkFunctionParser * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkFunctionParserWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkFunctionParserWrap *w = new VtkFunctionParserWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::SetFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFunction(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::SetReplaceInvalidValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplaceInvalidValues(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::SetReplacementValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetReplacementValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::SetScalarVariableValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetScalarVariableValue(
				*a0,
				info[1]->NumberValue()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetScalarVariableValue(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkFunctionParserWrap::SetVectorVariableValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkFunctionParserWrap *wrapper = ObjectWrap::Unwrap<VtkFunctionParserWrap>(info.Holder());
	vtkFunctionParser *native = (vtkFunctionParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetVectorVariableValue(
						*a0,
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetVectorVariableValue(
						info[0]->Int32Value(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
