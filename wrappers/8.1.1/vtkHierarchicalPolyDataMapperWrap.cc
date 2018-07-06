/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkCompositePolyDataMapperWrap.h"
#include "vtkHierarchicalPolyDataMapperWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalPolyDataMapperWrap::ptpl;

VtkHierarchicalPolyDataMapperWrap::VtkHierarchicalPolyDataMapperWrap()
{ }

VtkHierarchicalPolyDataMapperWrap::VtkHierarchicalPolyDataMapperWrap(vtkSmartPointer<vtkHierarchicalPolyDataMapper> _native)
{ native = _native; }

VtkHierarchicalPolyDataMapperWrap::~VtkHierarchicalPolyDataMapperWrap()
{ }

void VtkHierarchicalPolyDataMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHierarchicalPolyDataMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HierarchicalPolyDataMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkHierarchicalPolyDataMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHierarchicalPolyDataMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCompositePolyDataMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCompositePolyDataMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHierarchicalPolyDataMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKHIERARCHICALPOLYDATAMAPPERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHIERARCHICALPOLYDATAMAPPERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHierarchicalPolyDataMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalPolyDataMapper> native = vtkSmartPointer<vtkHierarchicalPolyDataMapper>::New();
		VtkHierarchicalPolyDataMapperWrap* obj = new VtkHierarchicalPolyDataMapperWrap(native);
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

void VtkHierarchicalPolyDataMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalPolyDataMapperWrap>(info.Holder());
	vtkHierarchicalPolyDataMapper *native = (vtkHierarchicalPolyDataMapper *)wrapper->native.GetPointer();
	vtkHierarchicalPolyDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHierarchicalPolyDataMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHierarchicalPolyDataMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalPolyDataMapperWrap *w = new VtkHierarchicalPolyDataMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalPolyDataMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalPolyDataMapperWrap>(info.Holder());
	vtkHierarchicalPolyDataMapper *native = (vtkHierarchicalPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHierarchicalPolyDataMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHierarchicalPolyDataMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHierarchicalPolyDataMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalPolyDataMapperWrap *w = new VtkHierarchicalPolyDataMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
