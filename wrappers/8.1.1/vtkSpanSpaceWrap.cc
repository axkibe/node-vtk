/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkScalarTreeWrap.h"
#include "vtkSpanSpaceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSpanSpaceWrap::ptpl;

VtkSpanSpaceWrap::VtkSpanSpaceWrap()
{ }

VtkSpanSpaceWrap::VtkSpanSpaceWrap(vtkSmartPointer<vtkSpanSpace> _native)
{ native = _native; }

VtkSpanSpaceWrap::~VtkSpanSpaceWrap()
{ }

void VtkSpanSpaceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSpanSpace").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SpanSpace").ToLocalChecked(), ConstructorGetter);
}

void VtkSpanSpaceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSpanSpaceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkScalarTreeWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkScalarTreeWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSpanSpaceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildTree", BuildTree);
	Nan::SetPrototypeMethod(tpl, "buildTree", BuildTree);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKSPANSPACEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSPANSPACEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSpanSpaceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSpanSpace> native = vtkSmartPointer<vtkSpanSpace>::New();
		VtkSpanSpaceWrap* obj = new VtkSpanSpaceWrap(native);
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

void VtkSpanSpaceWrap::BuildTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanSpaceWrap *wrapper = ObjectWrap::Unwrap<VtkSpanSpaceWrap>(info.Holder());
	vtkSpanSpace *native = (vtkSpanSpace *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildTree();
}

void VtkSpanSpaceWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanSpaceWrap *wrapper = ObjectWrap::Unwrap<VtkSpanSpaceWrap>(info.Holder());
	vtkSpanSpace *native = (vtkSpanSpace *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InitTraversal(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSpanSpaceWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanSpaceWrap *wrapper = ObjectWrap::Unwrap<VtkSpanSpaceWrap>(info.Holder());
	vtkSpanSpace *native = (vtkSpanSpace *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkSpanSpaceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanSpaceWrap *wrapper = ObjectWrap::Unwrap<VtkSpanSpaceWrap>(info.Holder());
	vtkSpanSpace *native = (vtkSpanSpace *)wrapper->native.GetPointer();
	vtkSpanSpace * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSpanSpaceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSpanSpaceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSpanSpaceWrap *w = new VtkSpanSpaceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSpanSpaceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSpanSpaceWrap *wrapper = ObjectWrap::Unwrap<VtkSpanSpaceWrap>(info.Holder());
	vtkSpanSpace *native = (vtkSpanSpace *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkSpanSpace * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkSpanSpaceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSpanSpaceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSpanSpaceWrap *w = new VtkSpanSpaceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

