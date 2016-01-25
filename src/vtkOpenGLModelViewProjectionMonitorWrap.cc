/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkOpenGLModelViewProjectionMonitorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOpenGLModelViewProjectionMonitorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLModelViewProjectionMonitorWrap::ptpl;

VtkOpenGLModelViewProjectionMonitorWrap::VtkOpenGLModelViewProjectionMonitorWrap()
{ }

VtkOpenGLModelViewProjectionMonitorWrap::VtkOpenGLModelViewProjectionMonitorWrap(vtkSmartPointer<vtkOpenGLModelViewProjectionMonitor> _native)
{ native = _native; }

VtkOpenGLModelViewProjectionMonitorWrap::~VtkOpenGLModelViewProjectionMonitorWrap()
{ }

void VtkOpenGLModelViewProjectionMonitorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkOpenGLModelViewProjectionMonitorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkOpenGLModelViewProjectionMonitor").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OpenGLModelViewProjectionMonitor").ToLocalChecked(),tpl->GetFunction());
}

void VtkOpenGLModelViewProjectionMonitorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

}

void VtkOpenGLModelViewProjectionMonitorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLModelViewProjectionMonitor> native = vtkSmartPointer<vtkOpenGLModelViewProjectionMonitor>::New();
		VtkOpenGLModelViewProjectionMonitorWrap* obj = new VtkOpenGLModelViewProjectionMonitorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLModelViewProjectionMonitorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLModelViewProjectionMonitorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLModelViewProjectionMonitorWrap>(info.Holder());
	vtkOpenGLModelViewProjectionMonitor *native = (vtkOpenGLModelViewProjectionMonitor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLModelViewProjectionMonitorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLModelViewProjectionMonitorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLModelViewProjectionMonitorWrap>(info.Holder());
	vtkOpenGLModelViewProjectionMonitor *native = (vtkOpenGLModelViewProjectionMonitor *)wrapper->native.GetPointer();
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

void VtkOpenGLModelViewProjectionMonitorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLModelViewProjectionMonitorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLModelViewProjectionMonitorWrap>(info.Holder());
	vtkOpenGLModelViewProjectionMonitor *native = (vtkOpenGLModelViewProjectionMonitor *)wrapper->native.GetPointer();
	vtkOpenGLModelViewProjectionMonitor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOpenGLModelViewProjectionMonitorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLModelViewProjectionMonitorWrap *w = new VtkOpenGLModelViewProjectionMonitorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLModelViewProjectionMonitorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLModelViewProjectionMonitorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLModelViewProjectionMonitorWrap>(info.Holder());
	vtkOpenGLModelViewProjectionMonitor *native = (vtkOpenGLModelViewProjectionMonitor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLModelViewProjectionMonitor * r;
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
			Nan::New<v8::Function>(VtkOpenGLModelViewProjectionMonitorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLModelViewProjectionMonitorWrap *w = new VtkOpenGLModelViewProjectionMonitorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLModelViewProjectionMonitorWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLModelViewProjectionMonitorWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLModelViewProjectionMonitorWrap>(info.Holder());
	vtkOpenGLModelViewProjectionMonitor *native = (vtkOpenGLModelViewProjectionMonitor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

