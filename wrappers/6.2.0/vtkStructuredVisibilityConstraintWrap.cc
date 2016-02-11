/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkStructuredVisibilityConstraintWrap.h"
#include "vtkUnsignedCharArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredVisibilityConstraintWrap::ptpl;

VtkStructuredVisibilityConstraintWrap::VtkStructuredVisibilityConstraintWrap()
{ }

VtkStructuredVisibilityConstraintWrap::VtkStructuredVisibilityConstraintWrap(vtkSmartPointer<vtkStructuredVisibilityConstraint> _native)
{ native = _native; }

VtkStructuredVisibilityConstraintWrap::~VtkStructuredVisibilityConstraintWrap()
{ }

void VtkStructuredVisibilityConstraintWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredVisibilityConstraint").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredVisibilityConstraint").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredVisibilityConstraintWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredVisibilityConstraintWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredVisibilityConstraintWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Allocate", Allocate);
	Nan::SetPrototypeMethod(tpl, "allocate", Allocate);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimensions", GetDimensions);
	Nan::SetPrototypeMethod(tpl, "getDimensions", GetDimensions);

	Nan::SetPrototypeMethod(tpl, "GetVisibilityById", GetVisibilityById);
	Nan::SetPrototypeMethod(tpl, "getVisibilityById", GetVisibilityById);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetVisibilityById", SetVisibilityById);
	Nan::SetPrototypeMethod(tpl, "setVisibilityById", SetVisibilityById);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkStructuredVisibilityConstraintWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredVisibilityConstraint> native = vtkSmartPointer<vtkStructuredVisibilityConstraint>::New();
		VtkStructuredVisibilityConstraintWrap* obj = new VtkStructuredVisibilityConstraintWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredVisibilityConstraintWrap::Allocate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Allocate();
}

void VtkStructuredVisibilityConstraintWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStructuredVisibilityConstraintWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStructuredVisibilityConstraintWrap *a0 = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkStructuredVisibilityConstraint *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredVisibilityConstraintWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredVisibilityConstraintWrap::GetDimensions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensions();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkStructuredVisibilityConstraintWrap::GetVisibilityById(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	vtkUnsignedCharArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVisibilityById();
	VtkUnsignedCharArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredVisibilityConstraintWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Initialize(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Initialize(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredVisibilityConstraintWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
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

void VtkStructuredVisibilityConstraintWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	vtkStructuredVisibilityConstraint * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkStructuredVisibilityConstraintWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredVisibilityConstraintWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredVisibilityConstraintWrap *w = new VtkStructuredVisibilityConstraintWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredVisibilityConstraintWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredVisibilityConstraint * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkStructuredVisibilityConstraintWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredVisibilityConstraintWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredVisibilityConstraintWrap *w = new VtkStructuredVisibilityConstraintWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredVisibilityConstraintWrap::SetVisibilityById(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkUnsignedCharArrayWrap *a0 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVisibilityById(
			(vtkUnsignedCharArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredVisibilityConstraintWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredVisibilityConstraintWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info.Holder());
	vtkStructuredVisibilityConstraint *native = (vtkStructuredVisibilityConstraint *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStructuredVisibilityConstraintWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStructuredVisibilityConstraintWrap *a0 = ObjectWrap::Unwrap<VtkStructuredVisibilityConstraintWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkStructuredVisibilityConstraint *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

