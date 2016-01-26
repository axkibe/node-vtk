/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImplicitFunctionWrap.h"
#include "vtkImplicitBooleanWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImplicitBooleanWrap::ptpl;

VtkImplicitBooleanWrap::VtkImplicitBooleanWrap()
{ }

VtkImplicitBooleanWrap::VtkImplicitBooleanWrap(vtkSmartPointer<vtkImplicitBoolean> _native)
{ native = _native; }

VtkImplicitBooleanWrap::~VtkImplicitBooleanWrap()
{ }

void VtkImplicitBooleanWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImplicitBoolean").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImplicitBoolean").ToLocalChecked(), ConstructorGetter);
}

void VtkImplicitBooleanWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImplicitBooleanWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImplicitFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImplicitFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImplicitBooleanWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddFunction", AddFunction);
	Nan::SetPrototypeMethod(tpl, "addFunction", AddFunction);

	Nan::SetPrototypeMethod(tpl, "EvaluateFunction", EvaluateFunction);
	Nan::SetPrototypeMethod(tpl, "evaluateFunction", EvaluateFunction);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFunction", GetFunction);
	Nan::SetPrototypeMethod(tpl, "getFunction", GetFunction);

	Nan::SetPrototypeMethod(tpl, "GetOperationType", GetOperationType);
	Nan::SetPrototypeMethod(tpl, "getOperationType", GetOperationType);

	Nan::SetPrototypeMethod(tpl, "GetOperationTypeAsString", GetOperationTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getOperationTypeAsString", GetOperationTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetOperationTypeMaxValue", GetOperationTypeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getOperationTypeMaxValue", GetOperationTypeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetOperationTypeMinValue", GetOperationTypeMinValue);
	Nan::SetPrototypeMethod(tpl, "getOperationTypeMinValue", GetOperationTypeMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveFunction", RemoveFunction);
	Nan::SetPrototypeMethod(tpl, "removeFunction", RemoveFunction);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOperationType", SetOperationType);
	Nan::SetPrototypeMethod(tpl, "setOperationType", SetOperationType);

	Nan::SetPrototypeMethod(tpl, "SetOperationTypeToDifference", SetOperationTypeToDifference);
	Nan::SetPrototypeMethod(tpl, "setOperationTypeToDifference", SetOperationTypeToDifference);

	Nan::SetPrototypeMethod(tpl, "SetOperationTypeToIntersection", SetOperationTypeToIntersection);
	Nan::SetPrototypeMethod(tpl, "setOperationTypeToIntersection", SetOperationTypeToIntersection);

	Nan::SetPrototypeMethod(tpl, "SetOperationTypeToUnion", SetOperationTypeToUnion);
	Nan::SetPrototypeMethod(tpl, "setOperationTypeToUnion", SetOperationTypeToUnion);

	Nan::SetPrototypeMethod(tpl, "SetOperationTypeToUnionOfMagnitudes", SetOperationTypeToUnionOfMagnitudes);
	Nan::SetPrototypeMethod(tpl, "setOperationTypeToUnionOfMagnitudes", SetOperationTypeToUnionOfMagnitudes);

	ptpl.Reset( tpl );
}

void VtkImplicitBooleanWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImplicitBoolean> native = vtkSmartPointer<vtkImplicitBoolean>::New();
		VtkImplicitBooleanWrap* obj = new VtkImplicitBooleanWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImplicitBooleanWrap::AddFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddFunction(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitBooleanWrap::EvaluateFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->EvaluateFunction(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitBooleanWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImplicitBooleanWrap::GetFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	vtkImplicitFunctionCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFunction();
		VtkImplicitFunctionCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionCollectionWrap *w = new VtkImplicitFunctionCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImplicitBooleanWrap::GetOperationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitBooleanWrap::GetOperationTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImplicitBooleanWrap::GetOperationTypeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationTypeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitBooleanWrap::GetOperationTypeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOperationTypeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImplicitBooleanWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
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

void VtkImplicitBooleanWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	vtkImplicitBoolean * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImplicitBooleanWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitBooleanWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitBooleanWrap *w = new VtkImplicitBooleanWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImplicitBooleanWrap::RemoveFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveFunction(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitBooleanWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImplicitBoolean * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImplicitBooleanWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImplicitBooleanWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImplicitBooleanWrap *w = new VtkImplicitBooleanWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitBooleanWrap::SetOperationType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOperationType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImplicitBooleanWrap::SetOperationTypeToDifference(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationTypeToDifference();
}

void VtkImplicitBooleanWrap::SetOperationTypeToIntersection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationTypeToIntersection();
}

void VtkImplicitBooleanWrap::SetOperationTypeToUnion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationTypeToUnion();
}

void VtkImplicitBooleanWrap::SetOperationTypeToUnionOfMagnitudes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImplicitBooleanWrap *wrapper = ObjectWrap::Unwrap<VtkImplicitBooleanWrap>(info.Holder());
	vtkImplicitBoolean *native = (vtkImplicitBoolean *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOperationTypeToUnionOfMagnitudes();
}

