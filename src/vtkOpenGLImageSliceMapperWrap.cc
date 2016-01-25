/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageSliceMapperWrap.h"
#include "vtkOpenGLImageSliceMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageSliceWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLImageSliceMapperWrap::constructor;

VtkOpenGLImageSliceMapperWrap::VtkOpenGLImageSliceMapperWrap()
{ }

VtkOpenGLImageSliceMapperWrap::VtkOpenGLImageSliceMapperWrap(vtkSmartPointer<vtkOpenGLImageSliceMapper> _native)
{ native = _native; }

VtkOpenGLImageSliceMapperWrap::~VtkOpenGLImageSliceMapperWrap()
{ }

void VtkOpenGLImageSliceMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkOpenGLImageSliceMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkAbstractMapperWrap::InitTpl(tpl);
	VtkAbstractMapper3DWrap::InitTpl(tpl);
	VtkImageMapper3DWrap::InitTpl(tpl);
	VtkImageSliceMapperWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkOpenGLImageSliceMapper").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OpenGLImageSliceMapper").ToLocalChecked(),tpl->GetFunction());
}

void VtkOpenGLImageSliceMapperWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkOpenGLImageSliceMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLImageSliceMapper> native = vtkSmartPointer<vtkOpenGLImageSliceMapper>::New();
		VtkOpenGLImageSliceMapperWrap* obj = new VtkOpenGLImageSliceMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLImageSliceMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageSliceMapperWrap>(info.Holder());
	vtkOpenGLImageSliceMapper *native = (vtkOpenGLImageSliceMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLImageSliceMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageSliceMapperWrap>(info.Holder());
	vtkOpenGLImageSliceMapper *native = (vtkOpenGLImageSliceMapper *)wrapper->native.GetPointer();
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

void VtkOpenGLImageSliceMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageSliceMapperWrap>(info.Holder());
	vtkOpenGLImageSliceMapper *native = (vtkOpenGLImageSliceMapper *)wrapper->native.GetPointer();
	vtkOpenGLImageSliceMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLImageSliceMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLImageSliceMapperWrap *w = new VtkOpenGLImageSliceMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLImageSliceMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageSliceMapperWrap>(info.Holder());
	vtkOpenGLImageSliceMapper *native = (vtkOpenGLImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLImageSliceMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageSliceMapperWrap>(info.Holder());
	vtkOpenGLImageSliceMapper *native = (vtkOpenGLImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkImageSliceWrap *a1 = ObjectWrap::Unwrap<VtkImageSliceWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkImageSlice *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLImageSliceMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLImageSliceMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLImageSliceMapperWrap>(info.Holder());
	vtkOpenGLImageSliceMapper *native = (vtkOpenGLImageSliceMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLImageSliceMapper * r;
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
			Nan::New<v8::Function>(VtkOpenGLImageSliceMapperWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLImageSliceMapperWrap *w = new VtkOpenGLImageSliceMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

