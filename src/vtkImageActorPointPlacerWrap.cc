/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointPlacerWrap.h"
#include "vtkImageActorPointPlacerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImageActorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageActorPointPlacerWrap::constructor;

VtkImageActorPointPlacerWrap::VtkImageActorPointPlacerWrap()
{ }

VtkImageActorPointPlacerWrap::VtkImageActorPointPlacerWrap(vtkSmartPointer<vtkImageActorPointPlacer> _native)
{ native = _native; }

VtkImageActorPointPlacerWrap::~VtkImageActorPointPlacerWrap()
{ }

void VtkImageActorPointPlacerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageActorPointPlacerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkPointPlacerWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageActorPointPlacer").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageActorPointPlacer").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageActorPointPlacerWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetImageActor", GetImageActor);
	Nan::SetPrototypeMethod(tpl, "getImageActor", GetImageActor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetImageActor", SetImageActor);
	Nan::SetPrototypeMethod(tpl, "setImageActor", SetImageActor);

	Nan::SetPrototypeMethod(tpl, "SetWorldTolerance", SetWorldTolerance);
	Nan::SetPrototypeMethod(tpl, "setWorldTolerance", SetWorldTolerance);

	Nan::SetPrototypeMethod(tpl, "UpdateInternalState", UpdateInternalState);
	Nan::SetPrototypeMethod(tpl, "updateInternalState", UpdateInternalState);

}

void VtkImageActorPointPlacerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageActorPointPlacer> native = vtkSmartPointer<vtkImageActorPointPlacer>::New();
		VtkImageActorPointPlacerWrap* obj = new VtkImageActorPointPlacerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageActorPointPlacerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageActorPointPlacerWrap::GetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	vtkImageActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageActor();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageActorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageActorWrap *w = new VtkImageActorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageActorPointPlacerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
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

void VtkImageActorPointPlacerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	vtkImageActorPointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageActorPointPlacerWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageActorPointPlacerWrap *w = new VtkImageActorPointPlacerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageActorPointPlacerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageActorPointPlacer * r;
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
			Nan::New<v8::Function>(VtkImageActorPointPlacerWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageActorPointPlacerWrap *w = new VtkImageActorPointPlacerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorPointPlacerWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorPointPlacerWrap::SetImageActor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkImageActorWrap *a0 = ObjectWrap::Unwrap<VtkImageActorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImageActor(
			(vtkImageActor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorPointPlacerWrap::SetWorldTolerance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWorldTolerance(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageActorPointPlacerWrap::UpdateInternalState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageActorPointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkImageActorPointPlacerWrap>(info.Holder());
	vtkImageActorPointPlacer *native = (vtkImageActorPointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UpdateInternalState();
	info.GetReturnValue().Set(Nan::New(r));
}

