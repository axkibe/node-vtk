/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDSPFilterDefinitionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkDSPFilterDefinitionWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkDSPFilterDefinitionWrap::ptpl;

VtkDSPFilterDefinitionWrap::VtkDSPFilterDefinitionWrap()
{ }

VtkDSPFilterDefinitionWrap::VtkDSPFilterDefinitionWrap(vtkSmartPointer<vtkDSPFilterDefinition> _native)
{ native = _native; }

VtkDSPFilterDefinitionWrap::~VtkDSPFilterDefinitionWrap()
{ }

void VtkDSPFilterDefinitionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDSPFilterDefinition").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DSPFilterDefinition").ToLocalChecked(), ConstructorGetter);
}

void VtkDSPFilterDefinitionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDSPFilterDefinitionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDSPFilterDefinitionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Clear", Clear);
	Nan::SetPrototypeMethod(tpl, "clear", Clear);

	Nan::SetPrototypeMethod(tpl, "Copy", Copy);
	Nan::SetPrototypeMethod(tpl, "copy", Copy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDenominatorWeight", GetDenominatorWeight);
	Nan::SetPrototypeMethod(tpl, "getDenominatorWeight", GetDenominatorWeight);

	Nan::SetPrototypeMethod(tpl, "GetForwardNumeratorWeight", GetForwardNumeratorWeight);
	Nan::SetPrototypeMethod(tpl, "getForwardNumeratorWeight", GetForwardNumeratorWeight);

	Nan::SetPrototypeMethod(tpl, "GetInputVariableName", GetInputVariableName);
	Nan::SetPrototypeMethod(tpl, "getInputVariableName", GetInputVariableName);

	Nan::SetPrototypeMethod(tpl, "GetNumDenominatorWeights", GetNumDenominatorWeights);
	Nan::SetPrototypeMethod(tpl, "getNumDenominatorWeights", GetNumDenominatorWeights);

	Nan::SetPrototypeMethod(tpl, "GetNumForwardNumeratorWeights", GetNumForwardNumeratorWeights);
	Nan::SetPrototypeMethod(tpl, "getNumForwardNumeratorWeights", GetNumForwardNumeratorWeights);

	Nan::SetPrototypeMethod(tpl, "GetNumNumeratorWeights", GetNumNumeratorWeights);
	Nan::SetPrototypeMethod(tpl, "getNumNumeratorWeights", GetNumNumeratorWeights);

	Nan::SetPrototypeMethod(tpl, "GetNumeratorWeight", GetNumeratorWeight);
	Nan::SetPrototypeMethod(tpl, "getNumeratorWeight", GetNumeratorWeight);

	Nan::SetPrototypeMethod(tpl, "GetOutputVariableName", GetOutputVariableName);
	Nan::SetPrototypeMethod(tpl, "getOutputVariableName", GetOutputVariableName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PushBackDenominatorWeight", PushBackDenominatorWeight);
	Nan::SetPrototypeMethod(tpl, "pushBackDenominatorWeight", PushBackDenominatorWeight);

	Nan::SetPrototypeMethod(tpl, "PushBackForwardNumeratorWeight", PushBackForwardNumeratorWeight);
	Nan::SetPrototypeMethod(tpl, "pushBackForwardNumeratorWeight", PushBackForwardNumeratorWeight);

	Nan::SetPrototypeMethod(tpl, "PushBackNumeratorWeight", PushBackNumeratorWeight);
	Nan::SetPrototypeMethod(tpl, "pushBackNumeratorWeight", PushBackNumeratorWeight);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputVariableName", SetInputVariableName);
	Nan::SetPrototypeMethod(tpl, "setInputVariableName", SetInputVariableName);

	Nan::SetPrototypeMethod(tpl, "SetOutputVariableName", SetOutputVariableName);
	Nan::SetPrototypeMethod(tpl, "setOutputVariableName", SetOutputVariableName);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkDSPFilterDefinitionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDSPFilterDefinition> native = vtkSmartPointer<vtkDSPFilterDefinition>::New();
		VtkDSPFilterDefinitionWrap* obj = new VtkDSPFilterDefinitionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDSPFilterDefinitionWrap::Clear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Clear();
}

void VtkDSPFilterDefinitionWrap::Copy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDSPFilterDefinitionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDSPFilterDefinitionWrap *a0 = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Copy(
			(vtkDSPFilterDefinition *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDSPFilterDefinitionWrap::GetDenominatorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDenominatorWeight(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::GetForwardNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetForwardNumeratorWeight(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::GetInputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputVariableName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDSPFilterDefinitionWrap::GetNumDenominatorWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumDenominatorWeights();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDSPFilterDefinitionWrap::GetNumForwardNumeratorWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumForwardNumeratorWeights();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDSPFilterDefinitionWrap::GetNumNumeratorWeights(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumNumeratorWeights();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDSPFilterDefinitionWrap::GetNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumeratorWeight(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::GetOutputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputVariableName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDSPFilterDefinitionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
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

void VtkDSPFilterDefinitionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	vtkDSPFilterDefinition * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDSPFilterDefinitionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDSPFilterDefinitionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDSPFilterDefinitionWrap *w = new VtkDSPFilterDefinitionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDSPFilterDefinitionWrap::PushBackDenominatorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PushBackDenominatorWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::PushBackForwardNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PushBackForwardNumeratorWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::PushBackNumeratorWeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PushBackNumeratorWeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDSPFilterDefinition * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDSPFilterDefinitionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkDSPFilterDefinitionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDSPFilterDefinitionWrap *w = new VtkDSPFilterDefinitionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::SetInputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputVariableName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDSPFilterDefinitionWrap::SetOutputVariableName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDSPFilterDefinitionWrap *wrapper = ObjectWrap::Unwrap<VtkDSPFilterDefinitionWrap>(info.Holder());
	vtkDSPFilterDefinition *native = (vtkDSPFilterDefinition *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputVariableName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

