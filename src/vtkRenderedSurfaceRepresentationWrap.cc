/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRenderedRepresentationWrap.h"
#include "vtkRenderedSurfaceRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewThemeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkRenderedSurfaceRepresentationWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkRenderedSurfaceRepresentationWrap::ptpl;

VtkRenderedSurfaceRepresentationWrap::VtkRenderedSurfaceRepresentationWrap()
{ }

VtkRenderedSurfaceRepresentationWrap::VtkRenderedSurfaceRepresentationWrap(vtkSmartPointer<vtkRenderedSurfaceRepresentation> _native)
{ native = _native; }

VtkRenderedSurfaceRepresentationWrap::~VtkRenderedSurfaceRepresentationWrap()
{ }

void VtkRenderedSurfaceRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderedRepresentationWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderedRepresentationWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkRenderedSurfaceRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkRenderedSurfaceRepresentation").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("RenderedSurfaceRepresentation").ToLocalChecked(),tpl->GetFunction());
}

void VtkRenderedSurfaceRepresentationWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "ApplyViewTheme", ApplyViewTheme);
	Nan::SetPrototypeMethod(tpl, "applyViewTheme", ApplyViewTheme);

	Nan::SetPrototypeMethod(tpl, "GetCellColorArrayName", GetCellColorArrayName);
	Nan::SetPrototypeMethod(tpl, "getCellColorArrayName", GetCellColorArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellColorArrayName", SetCellColorArrayName);
	Nan::SetPrototypeMethod(tpl, "setCellColorArrayName", SetCellColorArrayName);

}

void VtkRenderedSurfaceRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRenderedSurfaceRepresentation> native = vtkSmartPointer<vtkRenderedSurfaceRepresentation>::New();
		VtkRenderedSurfaceRepresentationWrap* obj = new VtkRenderedSurfaceRepresentationWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRenderedSurfaceRepresentationWrap::ApplyViewTheme(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedSurfaceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedSurfaceRepresentationWrap>(info.Holder());
	vtkRenderedSurfaceRepresentation *native = (vtkRenderedSurfaceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewThemeWrap *a0 = ObjectWrap::Unwrap<VtkViewThemeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ApplyViewTheme(
			(vtkViewTheme *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedSurfaceRepresentationWrap::GetCellColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedSurfaceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedSurfaceRepresentationWrap>(info.Holder());
	vtkRenderedSurfaceRepresentation *native = (vtkRenderedSurfaceRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellColorArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderedSurfaceRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedSurfaceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedSurfaceRepresentationWrap>(info.Holder());
	vtkRenderedSurfaceRepresentation *native = (vtkRenderedSurfaceRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRenderedSurfaceRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedSurfaceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedSurfaceRepresentationWrap>(info.Holder());
	vtkRenderedSurfaceRepresentation *native = (vtkRenderedSurfaceRepresentation *)wrapper->native.GetPointer();
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

void VtkRenderedSurfaceRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedSurfaceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedSurfaceRepresentationWrap>(info.Holder());
	vtkRenderedSurfaceRepresentation *native = (vtkRenderedSurfaceRepresentation *)wrapper->native.GetPointer();
	vtkRenderedSurfaceRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkRenderedSurfaceRepresentationWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRenderedSurfaceRepresentationWrap *w = new VtkRenderedSurfaceRepresentationWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRenderedSurfaceRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedSurfaceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedSurfaceRepresentationWrap>(info.Holder());
	vtkRenderedSurfaceRepresentation *native = (vtkRenderedSurfaceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRenderedSurfaceRepresentation * r;
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
			Nan::New<v8::Function>(VtkRenderedSurfaceRepresentationWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRenderedSurfaceRepresentationWrap *w = new VtkRenderedSurfaceRepresentationWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRenderedSurfaceRepresentationWrap::SetCellColorArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRenderedSurfaceRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkRenderedSurfaceRepresentationWrap>(info.Holder());
	vtkRenderedSurfaceRepresentation *native = (vtkRenderedSurfaceRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellColorArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
