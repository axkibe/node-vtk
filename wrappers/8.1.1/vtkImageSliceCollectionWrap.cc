/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPropCollectionWrap.h"
#include "vtkImageSliceCollectionWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkImageSliceWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageSliceCollectionWrap::ptpl;

VtkImageSliceCollectionWrap::VtkImageSliceCollectionWrap()
{ }

VtkImageSliceCollectionWrap::VtkImageSliceCollectionWrap(vtkSmartPointer<vtkImageSliceCollection> _native)
{ native = _native; }

VtkImageSliceCollectionWrap::~VtkImageSliceCollectionWrap()
{ }

void VtkImageSliceCollectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageSliceCollection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageSliceCollection").ToLocalChecked(), ConstructorGetter);
}

void VtkImageSliceCollectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageSliceCollectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPropCollectionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPropCollectionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageSliceCollectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddItem", AddItem);
	Nan::SetPrototypeMethod(tpl, "addItem", AddItem);

	Nan::SetPrototypeMethod(tpl, "GetNextImage", GetNextImage);
	Nan::SetPrototypeMethod(tpl, "getNextImage", GetNextImage);

	Nan::SetPrototypeMethod(tpl, "GetNextItem", GetNextItem);
	Nan::SetPrototypeMethod(tpl, "getNextItem", GetNextItem);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Sort", Sort);
	Nan::SetPrototypeMethod(tpl, "sort", Sort);

#ifdef VTK_NODE_PLUS_VTKIMAGESLICECOLLECTIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGESLICECOLLECTIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageSliceCollectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageSliceCollection> native = vtkSmartPointer<vtkImageSliceCollection>::New();
		VtkImageSliceCollectionWrap* obj = new VtkImageSliceCollectionWrap(native);
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

void VtkImageSliceCollectionWrap::AddItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceCollectionWrap>(info.Holder());
	vtkImageSliceCollection *native = (vtkImageSliceCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageSliceWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageSliceWrap *a0 = ObjectWrap::Unwrap<VtkImageSliceWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddItem(
			(vtkImageSlice *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceCollectionWrap::GetNextImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceCollectionWrap>(info.Holder());
	vtkImageSliceCollection *native = (vtkImageSliceCollection *)wrapper->native.GetPointer();
	vtkImageSlice * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextImage();
	VtkImageSliceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSliceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSliceWrap *w = new VtkImageSliceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSliceCollectionWrap::GetNextItem(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceCollectionWrap>(info.Holder());
	vtkImageSliceCollection *native = (vtkImageSliceCollection *)wrapper->native.GetPointer();
	vtkImageSlice * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextItem();
	VtkImageSliceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSliceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSliceWrap *w = new VtkImageSliceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSliceCollectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceCollectionWrap>(info.Holder());
	vtkImageSliceCollection *native = (vtkImageSliceCollection *)wrapper->native.GetPointer();
	vtkImageSliceCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageSliceCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageSliceCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageSliceCollectionWrap *w = new VtkImageSliceCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageSliceCollectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceCollectionWrap>(info.Holder());
	vtkImageSliceCollection *native = (vtkImageSliceCollection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkImageSliceCollection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkImageSliceCollectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageSliceCollectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageSliceCollectionWrap *w = new VtkImageSliceCollectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageSliceCollectionWrap::Sort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageSliceCollectionWrap *wrapper = ObjectWrap::Unwrap<VtkImageSliceCollectionWrap>(info.Holder());
	vtkImageSliceCollection *native = (vtkImageSliceCollection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Sort();
}

