/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkHierarchicalBoxDataSetAlgorithmWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkHierarchicalBoxDataSetWrap.h"
#include "vtkDataObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHierarchicalBoxDataSetAlgorithmWrap::ptpl;

VtkHierarchicalBoxDataSetAlgorithmWrap::VtkHierarchicalBoxDataSetAlgorithmWrap()
{ }

VtkHierarchicalBoxDataSetAlgorithmWrap::VtkHierarchicalBoxDataSetAlgorithmWrap(vtkSmartPointer<vtkHierarchicalBoxDataSetAlgorithm> _native)
{ native = _native; }

VtkHierarchicalBoxDataSetAlgorithmWrap::~VtkHierarchicalBoxDataSetAlgorithmWrap()
{ }

void VtkHierarchicalBoxDataSetAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHierarchicalBoxDataSetAlgorithm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HierarchicalBoxDataSetAlgorithm").ToLocalChecked(), ConstructorGetter);
}

void VtkHierarchicalBoxDataSetAlgorithmWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHierarchicalBoxDataSetAlgorithmWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHierarchicalBoxDataSetAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

#ifdef VTK_NODE_PLUS_VTKHIERARCHICALBOXDATASETALGORITHMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHIERARCHICALBOXDATASETALGORITHMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHierarchicalBoxDataSetAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHierarchicalBoxDataSetAlgorithm> native = vtkSmartPointer<vtkHierarchicalBoxDataSetAlgorithm>::New();
		VtkHierarchicalBoxDataSetAlgorithmWrap* obj = new VtkHierarchicalBoxDataSetAlgorithmWrap(native);
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

void VtkHierarchicalBoxDataSetAlgorithmWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataSetAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataSetAlgorithmWrap>(info.Holder());
	vtkHierarchicalBoxDataSetAlgorithm *native = (vtkHierarchicalBoxDataSetAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkHierarchicalBoxDataSet * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
		VtkHierarchicalBoxDataSetWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHierarchicalBoxDataSetWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalBoxDataSetWrap *w = new VtkHierarchicalBoxDataSetWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkHierarchicalBoxDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkHierarchicalBoxDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHierarchicalBoxDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalBoxDataSetWrap *w = new VtkHierarchicalBoxDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalBoxDataSetAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataSetAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataSetAlgorithmWrap>(info.Holder());
	vtkHierarchicalBoxDataSetAlgorithm *native = (vtkHierarchicalBoxDataSetAlgorithm *)wrapper->native.GetPointer();
	vtkHierarchicalBoxDataSetAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHierarchicalBoxDataSetAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHierarchicalBoxDataSetAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHierarchicalBoxDataSetAlgorithmWrap *w = new VtkHierarchicalBoxDataSetAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHierarchicalBoxDataSetAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataSetAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataSetAlgorithmWrap>(info.Holder());
	vtkHierarchicalBoxDataSetAlgorithm *native = (vtkHierarchicalBoxDataSetAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHierarchicalBoxDataSetAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHierarchicalBoxDataSetAlgorithmWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHierarchicalBoxDataSetAlgorithmWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHierarchicalBoxDataSetAlgorithmWrap *w = new VtkHierarchicalBoxDataSetAlgorithmWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHierarchicalBoxDataSetAlgorithmWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHierarchicalBoxDataSetAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHierarchicalBoxDataSetAlgorithmWrap>(info.Holder());
	vtkHierarchicalBoxDataSetAlgorithm *native = (vtkHierarchicalBoxDataSetAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetInputData(
				info[0]->Int32Value(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

