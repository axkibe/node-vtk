/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkShaderDeviceAdapter2Wrap.h"
#include "vtkGLSLShaderDeviceAdapter2Wrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGLSLShaderDeviceAdapter2Wrap::ptpl;

VtkGLSLShaderDeviceAdapter2Wrap::VtkGLSLShaderDeviceAdapter2Wrap()
{ }

VtkGLSLShaderDeviceAdapter2Wrap::VtkGLSLShaderDeviceAdapter2Wrap(vtkSmartPointer<vtkGLSLShaderDeviceAdapter2> _native)
{ native = _native; }

VtkGLSLShaderDeviceAdapter2Wrap::~VtkGLSLShaderDeviceAdapter2Wrap()
{ }

void VtkGLSLShaderDeviceAdapter2Wrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGLSLShaderDeviceAdapter2").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GLSLShaderDeviceAdapter2").ToLocalChecked(), ConstructorGetter);
}

void VtkGLSLShaderDeviceAdapter2Wrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGLSLShaderDeviceAdapter2Wrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkShaderDeviceAdapter2Wrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkShaderDeviceAdapter2Wrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGLSLShaderDeviceAdapter2Wrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrepareForRender", PrepareForRender);
	Nan::SetPrototypeMethod(tpl, "prepareForRender", PrepareForRender);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkGLSLShaderDeviceAdapter2Wrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGLSLShaderDeviceAdapter2> native = vtkSmartPointer<vtkGLSLShaderDeviceAdapter2>::New();
		VtkGLSLShaderDeviceAdapter2Wrap* obj = new VtkGLSLShaderDeviceAdapter2Wrap(native);
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

void VtkGLSLShaderDeviceAdapter2Wrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGLSLShaderDeviceAdapter2Wrap *wrapper = ObjectWrap::Unwrap<VtkGLSLShaderDeviceAdapter2Wrap>(info.Holder());
	vtkGLSLShaderDeviceAdapter2 *native = (vtkGLSLShaderDeviceAdapter2 *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGLSLShaderDeviceAdapter2Wrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGLSLShaderDeviceAdapter2Wrap *wrapper = ObjectWrap::Unwrap<VtkGLSLShaderDeviceAdapter2Wrap>(info.Holder());
	vtkGLSLShaderDeviceAdapter2 *native = (vtkGLSLShaderDeviceAdapter2 *)wrapper->native.GetPointer();
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

void VtkGLSLShaderDeviceAdapter2Wrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGLSLShaderDeviceAdapter2Wrap *wrapper = ObjectWrap::Unwrap<VtkGLSLShaderDeviceAdapter2Wrap>(info.Holder());
	vtkGLSLShaderDeviceAdapter2 *native = (vtkGLSLShaderDeviceAdapter2 *)wrapper->native.GetPointer();
	vtkGLSLShaderDeviceAdapter2 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGLSLShaderDeviceAdapter2Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGLSLShaderDeviceAdapter2Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGLSLShaderDeviceAdapter2Wrap *w = new VtkGLSLShaderDeviceAdapter2Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGLSLShaderDeviceAdapter2Wrap::PrepareForRender(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGLSLShaderDeviceAdapter2Wrap *wrapper = ObjectWrap::Unwrap<VtkGLSLShaderDeviceAdapter2Wrap>(info.Holder());
	vtkGLSLShaderDeviceAdapter2 *native = (vtkGLSLShaderDeviceAdapter2 *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PrepareForRender();
}

void VtkGLSLShaderDeviceAdapter2Wrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGLSLShaderDeviceAdapter2Wrap *wrapper = ObjectWrap::Unwrap<VtkGLSLShaderDeviceAdapter2Wrap>(info.Holder());
	vtkGLSLShaderDeviceAdapter2 *native = (vtkGLSLShaderDeviceAdapter2 *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGLSLShaderDeviceAdapter2 * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGLSLShaderDeviceAdapter2Wrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGLSLShaderDeviceAdapter2Wrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGLSLShaderDeviceAdapter2Wrap *w = new VtkGLSLShaderDeviceAdapter2Wrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

