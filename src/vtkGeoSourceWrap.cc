/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGeoSourceWrap.h"
#include "vtkGeoTreeNodeWrap.h"
#include "vtkCollectionWrap.h"
#include "vtkAbstractTransformWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkGeoSourceWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkGeoSourceWrap::ptpl;

VtkGeoSourceWrap::VtkGeoSourceWrap()
{ }

VtkGeoSourceWrap::VtkGeoSourceWrap(vtkSmartPointer<vtkGeoSource> _native)
{ native = _native; }

VtkGeoSourceWrap::~VtkGeoSourceWrap()
{ }

void VtkGeoSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoSource").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetRequestedNodes", GetRequestedNodes);
	Nan::SetPrototypeMethod(tpl, "getRequestedNodes", GetRequestedNodes);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RequestChildren", RequestChildren);
	Nan::SetPrototypeMethod(tpl, "requestChildren", RequestChildren);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShutDown", ShutDown);
	Nan::SetPrototypeMethod(tpl, "shutDown", ShutDown);

	Nan::SetPrototypeMethod(tpl, "WorkerThread", WorkerThread);
	Nan::SetPrototypeMethod(tpl, "workerThread", WorkerThread);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkGeoSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGeoSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoSourceWrap::GetRequestedNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		vtkCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetRequestedNodes(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
			VtkCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCollectionWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCollectionWrap *w = new VtkCollectionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoSourceWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
		VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractTransformWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoSourceWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Initialize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
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

void VtkGeoSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	vtkGeoSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkGeoSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoSourceWrap *w = new VtkGeoSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoSourceWrap::RequestChildren(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGeoTreeNodeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGeoTreeNodeWrap *a0 = ObjectWrap::Unwrap<VtkGeoTreeNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RequestChildren(
			(vtkGeoTreeNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkGeoSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoSourceWrap *w = new VtkGeoSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoSourceWrap::ShutDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ShutDown();
}

void VtkGeoSourceWrap::WorkerThread(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoSourceWrap *wrapper = ObjectWrap::Unwrap<VtkGeoSourceWrap>(info.Holder());
	vtkGeoSource *native = (vtkGeoSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WorkerThread();
}

