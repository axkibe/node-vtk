/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCellIteratorWrap.h"
#include "vtkPointSetCellIteratorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointSetCellIteratorWrap::ptpl;

VtkPointSetCellIteratorWrap::VtkPointSetCellIteratorWrap()
{ }

VtkPointSetCellIteratorWrap::VtkPointSetCellIteratorWrap(vtkSmartPointer<vtkPointSetCellIterator> _native)
{ native = _native; }

VtkPointSetCellIteratorWrap::~VtkPointSetCellIteratorWrap()
{ }

void VtkPointSetCellIteratorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointSetCellIterator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointSetCellIterator").ToLocalChecked(), ConstructorGetter);
}

void VtkPointSetCellIteratorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointSetCellIteratorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCellIteratorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCellIteratorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointSetCellIteratorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "IsDoneWithTraversal", IsDoneWithTraversal);
	Nan::SetPrototypeMethod(tpl, "isDoneWithTraversal", IsDoneWithTraversal);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKPOINTSETCELLITERATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTSETCELLITERATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPointSetCellIteratorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointSetCellIterator> native = vtkSmartPointer<vtkPointSetCellIterator>::New();
		VtkPointSetCellIteratorWrap* obj = new VtkPointSetCellIteratorWrap(native);
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

void VtkPointSetCellIteratorWrap::IsDoneWithTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointSetCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkPointSetCellIteratorWrap>(info.Holder());
	vtkPointSetCellIterator *native = (vtkPointSetCellIterator *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsDoneWithTraversal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointSetCellIteratorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointSetCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkPointSetCellIteratorWrap>(info.Holder());
	vtkPointSetCellIterator *native = (vtkPointSetCellIterator *)wrapper->native.GetPointer();
	vtkPointSetCellIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPointSetCellIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointSetCellIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointSetCellIteratorWrap *w = new VtkPointSetCellIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointSetCellIteratorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointSetCellIteratorWrap *wrapper = ObjectWrap::Unwrap<VtkPointSetCellIteratorWrap>(info.Holder());
	vtkPointSetCellIterator *native = (vtkPointSetCellIterator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPointSetCellIterator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPointSetCellIteratorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointSetCellIteratorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointSetCellIteratorWrap *w = new VtkPointSetCellIteratorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

