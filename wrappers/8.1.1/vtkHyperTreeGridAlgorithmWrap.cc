/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkHyperTreeGridAlgorithmWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkHyperTreeGridWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeGridAlgorithmWrap::ptpl;

VtkHyperTreeGridAlgorithmWrap::VtkHyperTreeGridAlgorithmWrap()
{ }

VtkHyperTreeGridAlgorithmWrap::VtkHyperTreeGridAlgorithmWrap(vtkSmartPointer<vtkHyperTreeGridAlgorithm> _native)
{ native = _native; }

VtkHyperTreeGridAlgorithmWrap::~VtkHyperTreeGridAlgorithmWrap()
{ }

void VtkHyperTreeGridAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperTreeGridAlgorithm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperTreeGridAlgorithm").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperTreeGridAlgorithmWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperTreeGridAlgorithmWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperTreeGridAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddInputData", AddInputData);
	Nan::SetPrototypeMethod(tpl, "addInputData", AddInputData);

	Nan::SetPrototypeMethod(tpl, "GetHyperTreeGridOutput", GetHyperTreeGridOutput);
	Nan::SetPrototypeMethod(tpl, "getHyperTreeGridOutput", GetHyperTreeGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetPolyDataOutput", GetPolyDataOutput);
	Nan::SetPrototypeMethod(tpl, "getPolyDataOutput", GetPolyDataOutput);

	Nan::SetPrototypeMethod(tpl, "GetUnstructuredGridOutput", GetUnstructuredGridOutput);
	Nan::SetPrototypeMethod(tpl, "getUnstructuredGridOutput", GetUnstructuredGridOutput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetOutput", SetOutput);
	Nan::SetPrototypeMethod(tpl, "setOutput", SetOutput);

#ifdef VTK_NODE_PLUS_VTKHYPERTREEGRIDALGORITHMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPERTREEGRIDALGORITHMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperTreeGridAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperTreeGridAlgorithmWrap::AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddInputData(
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
			native->AddInputData(
				info[0]->Int32Value(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAlgorithmWrap::GetHyperTreeGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkHyperTreeGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetHyperTreeGridOutput(
			info[0]->Int32Value()
		);
		VtkHyperTreeGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridWrap *w = new VtkHyperTreeGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkHyperTreeGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHyperTreeGridOutput();
	VtkHyperTreeGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridWrap *w = new VtkHyperTreeGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAlgorithmWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
		VtkDataObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataObjectWrap *w = new VtkDataObjectWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkDataObjectWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataObjectWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataObjectWrap *w = new VtkDataObjectWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAlgorithmWrap::GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPolyDataOutput(
			info[0]->Int32Value()
		);
		VtkPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataWrap *w = new VtkPolyDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyDataOutput();
	VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAlgorithmWrap::GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkUnstructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetUnstructuredGridOutput(
			info[0]->Int32Value()
		);
		VtkUnstructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnstructuredGridOutput();
	VtkUnstructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	vtkHyperTreeGridAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperTreeGridAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridAlgorithmWrap *w = new VtkHyperTreeGridAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHyperTreeGridAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHyperTreeGridAlgorithmWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperTreeGridAlgorithmWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridAlgorithmWrap *w = new VtkHyperTreeGridAlgorithmWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAlgorithmWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
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

void VtkHyperTreeGridAlgorithmWrap::SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAlgorithmWrap>(info.Holder());
	vtkHyperTreeGridAlgorithm *native = (vtkHyperTreeGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutput(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

