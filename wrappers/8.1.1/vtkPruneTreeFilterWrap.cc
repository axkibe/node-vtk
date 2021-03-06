/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTreeAlgorithmWrap.h"
#include "vtkPruneTreeFilterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPruneTreeFilterWrap::ptpl;

VtkPruneTreeFilterWrap::VtkPruneTreeFilterWrap()
{ }

VtkPruneTreeFilterWrap::VtkPruneTreeFilterWrap(vtkSmartPointer<vtkPruneTreeFilter> _native)
{ native = _native; }

VtkPruneTreeFilterWrap::~VtkPruneTreeFilterWrap()
{ }

void VtkPruneTreeFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPruneTreeFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PruneTreeFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkPruneTreeFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPruneTreeFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPruneTreeFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetShouldPruneParentVertex", GetShouldPruneParentVertex);
	Nan::SetPrototypeMethod(tpl, "getShouldPruneParentVertex", GetShouldPruneParentVertex);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetShouldPruneParentVertex", SetShouldPruneParentVertex);
	Nan::SetPrototypeMethod(tpl, "setShouldPruneParentVertex", SetShouldPruneParentVertex);

#ifdef VTK_NODE_PLUS_VTKPRUNETREEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPRUNETREEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPruneTreeFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPruneTreeFilter> native = vtkSmartPointer<vtkPruneTreeFilter>::New();
		VtkPruneTreeFilterWrap* obj = new VtkPruneTreeFilterWrap(native);
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

void VtkPruneTreeFilterWrap::GetShouldPruneParentVertex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPruneTreeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPruneTreeFilterWrap>(info.Holder());
	vtkPruneTreeFilter *native = (vtkPruneTreeFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShouldPruneParentVertex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPruneTreeFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPruneTreeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPruneTreeFilterWrap>(info.Holder());
	vtkPruneTreeFilter *native = (vtkPruneTreeFilter *)wrapper->native.GetPointer();
	vtkPruneTreeFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPruneTreeFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPruneTreeFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPruneTreeFilterWrap *w = new VtkPruneTreeFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPruneTreeFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPruneTreeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPruneTreeFilterWrap>(info.Holder());
	vtkPruneTreeFilter *native = (vtkPruneTreeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPruneTreeFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPruneTreeFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPruneTreeFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPruneTreeFilterWrap *w = new VtkPruneTreeFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPruneTreeFilterWrap::SetShouldPruneParentVertex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPruneTreeFilterWrap *wrapper = ObjectWrap::Unwrap<VtkPruneTreeFilterWrap>(info.Holder());
	vtkPruneTreeFilter *native = (vtkPruneTreeFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShouldPruneParentVertex(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

