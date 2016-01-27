/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkHyperOctreeAlgorithmWrap.h"
#include "vtkHyperOctreeSampleFunctionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeSampleFunctionWrap::ptpl;

VtkHyperOctreeSampleFunctionWrap::VtkHyperOctreeSampleFunctionWrap()
{ }

VtkHyperOctreeSampleFunctionWrap::VtkHyperOctreeSampleFunctionWrap(vtkSmartPointer<vtkHyperOctreeSampleFunction> _native)
{ native = _native; }

VtkHyperOctreeSampleFunctionWrap::~VtkHyperOctreeSampleFunctionWrap()
{ }

void VtkHyperOctreeSampleFunctionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctreeSampleFunction").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctreeSampleFunction").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeSampleFunctionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeSampleFunctionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHyperOctreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHyperOctreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeSampleFunctionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepth", GetDepth);
	Nan::SetPrototypeMethod(tpl, "getDepth", GetDepth);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetImplicitFunction", GetImplicitFunction);
	Nan::SetPrototypeMethod(tpl, "getImplicitFunction", GetImplicitFunction);

	Nan::SetPrototypeMethod(tpl, "GetLevels", GetLevels);
	Nan::SetPrototypeMethod(tpl, "getLevels", GetLevels);

	Nan::SetPrototypeMethod(tpl, "GetMinLevels", GetMinLevels);
	Nan::SetPrototypeMethod(tpl, "getMinLevels", GetMinLevels);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarType", GetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarType", GetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "GetThreshold", GetThreshold);
	Nan::SetPrototypeMethod(tpl, "getThreshold", GetThreshold);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDepth", SetDepth);
	Nan::SetPrototypeMethod(tpl, "setDepth", SetDepth);

	Nan::SetPrototypeMethod(tpl, "SetDimension", SetDimension);
	Nan::SetPrototypeMethod(tpl, "setDimension", SetDimension);

	Nan::SetPrototypeMethod(tpl, "SetHeight", SetHeight);
	Nan::SetPrototypeMethod(tpl, "setHeight", SetHeight);

	Nan::SetPrototypeMethod(tpl, "SetImplicitFunction", SetImplicitFunction);
	Nan::SetPrototypeMethod(tpl, "setImplicitFunction", SetImplicitFunction);

	Nan::SetPrototypeMethod(tpl, "SetLevels", SetLevels);
	Nan::SetPrototypeMethod(tpl, "setLevels", SetLevels);

	Nan::SetPrototypeMethod(tpl, "SetMinLevels", SetMinLevels);
	Nan::SetPrototypeMethod(tpl, "setMinLevels", SetMinLevels);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarType", SetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarType", SetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToChar", SetOutputScalarTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToChar", SetOutputScalarTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToInt", SetOutputScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToInt", SetOutputScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToLong", SetOutputScalarTypeToLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToLong", SetOutputScalarTypeToLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToShort", SetOutputScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToShort", SetOutputScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetThreshold", SetThreshold);
	Nan::SetPrototypeMethod(tpl, "setThreshold", SetThreshold);

	Nan::SetPrototypeMethod(tpl, "SetWidth", SetWidth);
	Nan::SetPrototypeMethod(tpl, "setWidth", SetWidth);

	ptpl.Reset( tpl );
}

void VtkHyperOctreeSampleFunctionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctreeSampleFunction> native = vtkSmartPointer<vtkHyperOctreeSampleFunction>::New();
		VtkHyperOctreeSampleFunctionWrap* obj = new VtkHyperOctreeSampleFunctionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperOctreeSampleFunctionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperOctreeSampleFunctionWrap::GetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHeight();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	vtkImplicitFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImplicitFunction();
		VtkImplicitFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionWrap *w = new VtkImplicitFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeSampleFunctionWrap::GetLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::GetMinLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinLevels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::GetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeSampleFunctionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkHyperOctreeSampleFunctionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	vtkHyperOctreeSampleFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHyperOctreeSampleFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeSampleFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeSampleFunctionWrap *w = new VtkHyperOctreeSampleFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeSampleFunctionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctreeSampleFunction * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHyperOctreeSampleFunctionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeSampleFunctionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeSampleFunctionWrap *w = new VtkHyperOctreeSampleFunctionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetDepth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHeight(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImplicitFunction(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLevels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetMinLevels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinLevels(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToChar();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToDouble();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToFloat();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToInt();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToLong();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToShort();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedChar();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedInt();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedLong();
}

void VtkHyperOctreeSampleFunctionWrap::SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedShort();
}

void VtkHyperOctreeSampleFunctionWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSize(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeSampleFunctionWrap::SetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeSampleFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeSampleFunctionWrap>(info.Holder());
	vtkHyperOctreeSampleFunction *native = (vtkHyperOctreeSampleFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

