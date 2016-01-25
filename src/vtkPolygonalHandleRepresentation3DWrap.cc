/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractPolygonalHandleRepresentation3DWrap.h"
#include "vtkPolygonalHandleRepresentation3DWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkPolygonalHandleRepresentation3DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkPolygonalHandleRepresentation3DWrap::ptpl;

VtkPolygonalHandleRepresentation3DWrap::VtkPolygonalHandleRepresentation3DWrap()
{ }

VtkPolygonalHandleRepresentation3DWrap::VtkPolygonalHandleRepresentation3DWrap(vtkSmartPointer<vtkPolygonalHandleRepresentation3D> _native)
{ native = _native; }

VtkPolygonalHandleRepresentation3DWrap::~VtkPolygonalHandleRepresentation3DWrap()
{ }

void VtkPolygonalHandleRepresentation3DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractPolygonalHandleRepresentation3DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractPolygonalHandleRepresentation3DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkPolygonalHandleRepresentation3DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkPolygonalHandleRepresentation3D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("PolygonalHandleRepresentation3D").ToLocalChecked(),tpl->GetFunction());
}

void VtkPolygonalHandleRepresentation3DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOffset", SetOffset);
	Nan::SetPrototypeMethod(tpl, "setOffset", SetOffset);

}

void VtkPolygonalHandleRepresentation3DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolygonalHandleRepresentation3D> native = vtkSmartPointer<vtkPolygonalHandleRepresentation3D>::New();
		VtkPolygonalHandleRepresentation3DWrap* obj = new VtkPolygonalHandleRepresentation3DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolygonalHandleRepresentation3DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolygonalHandleRepresentation3DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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

void VtkPolygonalHandleRepresentation3DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	vtkPolygonalHandleRepresentation3D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPolygonalHandleRepresentation3DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolygonalHandleRepresentation3DWrap *w = new VtkPolygonalHandleRepresentation3DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolygonalHandleRepresentation3DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolygonalHandleRepresentation3D * r;
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
			Nan::New<v8::Function>(VtkPolygonalHandleRepresentation3DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolygonalHandleRepresentation3DWrap *w = new VtkPolygonalHandleRepresentation3DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolygonalHandleRepresentation3DWrap::SetOffset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolygonalHandleRepresentation3DWrap *wrapper = ObjectWrap::Unwrap<VtkPolygonalHandleRepresentation3DWrap>(info.Holder());
	vtkPolygonalHandleRepresentation3D *native = (vtkPolygonalHandleRepresentation3D *)wrapper->native.GetPointer();
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
				native->SetOffset(
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

