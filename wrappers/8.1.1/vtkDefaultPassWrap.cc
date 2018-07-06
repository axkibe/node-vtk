/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkRenderPassWrap.h"
#include "vtkDefaultPassWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDefaultPassWrap::ptpl;

VtkDefaultPassWrap::VtkDefaultPassWrap()
{ }

VtkDefaultPassWrap::VtkDefaultPassWrap(vtkSmartPointer<vtkDefaultPass> _native)
{ native = _native; }

VtkDefaultPassWrap::~VtkDefaultPassWrap()
{ }

void VtkDefaultPassWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDefaultPass").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DefaultPass").ToLocalChecked(), ConstructorGetter);
}

void VtkDefaultPassWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDefaultPassWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRenderPassWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRenderPassWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDefaultPassWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKDEFAULTPASSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKDEFAULTPASSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkDefaultPassWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDefaultPass> native = vtkSmartPointer<vtkDefaultPass>::New();
		VtkDefaultPassWrap* obj = new VtkDefaultPassWrap(native);
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

void VtkDefaultPassWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPassWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPassWrap>(info.Holder());
	vtkDefaultPass *native = (vtkDefaultPass *)wrapper->native.GetPointer();
	vtkDefaultPass * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDefaultPassWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDefaultPassWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDefaultPassWrap *w = new VtkDefaultPassWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDefaultPassWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDefaultPassWrap *wrapper = ObjectWrap::Unwrap<VtkDefaultPassWrap>(info.Holder());
	vtkDefaultPass *native = (vtkDefaultPass *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkDefaultPass * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkDefaultPassWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDefaultPassWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDefaultPassWrap *w = new VtkDefaultPassWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
