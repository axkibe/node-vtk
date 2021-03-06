/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkMoleculeToPolyDataFilterWrap.h"
#include "vtkMoleculeToBondStickFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMoleculeToBondStickFilterWrap::ptpl;

VtkMoleculeToBondStickFilterWrap::VtkMoleculeToBondStickFilterWrap()
{ }

VtkMoleculeToBondStickFilterWrap::VtkMoleculeToBondStickFilterWrap(vtkSmartPointer<vtkMoleculeToBondStickFilter> _native)
{ native = _native; }

VtkMoleculeToBondStickFilterWrap::~VtkMoleculeToBondStickFilterWrap()
{ }

void VtkMoleculeToBondStickFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMoleculeToBondStickFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MoleculeToBondStickFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkMoleculeToBondStickFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMoleculeToBondStickFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMoleculeToPolyDataFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMoleculeToPolyDataFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMoleculeToBondStickFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKMOLECULETOBONDSTICKFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKMOLECULETOBONDSTICKFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkMoleculeToBondStickFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMoleculeToBondStickFilter> native = vtkSmartPointer<vtkMoleculeToBondStickFilter>::New();
		VtkMoleculeToBondStickFilterWrap* obj = new VtkMoleculeToBondStickFilterWrap(native);
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

void VtkMoleculeToBondStickFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeToBondStickFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeToBondStickFilterWrap>(info.Holder());
	vtkMoleculeToBondStickFilter *native = (vtkMoleculeToBondStickFilter *)wrapper->native.GetPointer();
	vtkMoleculeToBondStickFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkMoleculeToBondStickFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMoleculeToBondStickFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMoleculeToBondStickFilterWrap *w = new VtkMoleculeToBondStickFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMoleculeToBondStickFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMoleculeToBondStickFilterWrap *wrapper = ObjectWrap::Unwrap<VtkMoleculeToBondStickFilterWrap>(info.Holder());
	vtkMoleculeToBondStickFilter *native = (vtkMoleculeToBondStickFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkMoleculeToBondStickFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkMoleculeToBondStickFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMoleculeToBondStickFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMoleculeToBondStickFilterWrap *w = new VtkMoleculeToBondStickFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

