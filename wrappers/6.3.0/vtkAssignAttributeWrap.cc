/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkAssignAttributeWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAssignAttributeWrap::ptpl;

VtkAssignAttributeWrap::VtkAssignAttributeWrap()
{ }

VtkAssignAttributeWrap::VtkAssignAttributeWrap(vtkSmartPointer<vtkAssignAttribute> _native)
{ native = _native; }

VtkAssignAttributeWrap::~VtkAssignAttributeWrap()
{ }

void VtkAssignAttributeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAssignAttribute").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AssignAttribute").ToLocalChecked(), ConstructorGetter);
}

void VtkAssignAttributeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAssignAttributeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAssignAttributeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Assign", Assign);
	Nan::SetPrototypeMethod(tpl, "assign", Assign);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkAssignAttributeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAssignAttribute> native = vtkSmartPointer<vtkAssignAttribute>::New();
		VtkAssignAttributeWrap* obj = new VtkAssignAttributeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAssignAttributeWrap::Assign(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignAttributeWrap *wrapper = ObjectWrap::Unwrap<VtkAssignAttributeWrap>(info.Holder());
	vtkAssignAttribute *native = (vtkAssignAttribute *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				Nan::Utf8String a2(info[2]);
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Assign(
					*a0,
					*a1,
					*a2
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Assign(
					*a0,
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Assign(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssignAttributeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignAttributeWrap *wrapper = ObjectWrap::Unwrap<VtkAssignAttributeWrap>(info.Holder());
	vtkAssignAttribute *native = (vtkAssignAttribute *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignAttributeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignAttributeWrap *wrapper = ObjectWrap::Unwrap<VtkAssignAttributeWrap>(info.Holder());
	vtkAssignAttribute *native = (vtkAssignAttribute *)wrapper->native.GetPointer();
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

void VtkAssignAttributeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignAttributeWrap *wrapper = ObjectWrap::Unwrap<VtkAssignAttributeWrap>(info.Holder());
	vtkAssignAttribute *native = (vtkAssignAttribute *)wrapper->native.GetPointer();
	vtkAssignAttribute * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAssignAttributeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssignAttributeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssignAttributeWrap *w = new VtkAssignAttributeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssignAttributeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignAttributeWrap *wrapper = ObjectWrap::Unwrap<VtkAssignAttributeWrap>(info.Holder());
	vtkAssignAttribute *native = (vtkAssignAttribute *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAssignAttribute * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAssignAttributeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAssignAttributeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAssignAttributeWrap *w = new VtkAssignAttributeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

