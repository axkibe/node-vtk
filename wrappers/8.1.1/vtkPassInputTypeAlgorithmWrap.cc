/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkStructuredPointsWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkRectilinearGridWrap.h"
#include "vtkTableWrap.h"
#include "vtkGraphWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPassInputTypeAlgorithmWrap::ptpl;

VtkPassInputTypeAlgorithmWrap::VtkPassInputTypeAlgorithmWrap()
{ }

VtkPassInputTypeAlgorithmWrap::VtkPassInputTypeAlgorithmWrap(vtkSmartPointer<vtkPassInputTypeAlgorithm> _native)
{ native = _native; }

VtkPassInputTypeAlgorithmWrap::~VtkPassInputTypeAlgorithmWrap()
{ }

void VtkPassInputTypeAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPassInputTypeAlgorithm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PassInputTypeAlgorithm").ToLocalChecked(), ConstructorGetter);
}

void VtkPassInputTypeAlgorithmWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPassInputTypeAlgorithmWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPassInputTypeAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddInputData", AddInputData);
	Nan::SetPrototypeMethod(tpl, "addInputData", AddInputData);

	Nan::SetPrototypeMethod(tpl, "GetGraphOutput", GetGraphOutput);
	Nan::SetPrototypeMethod(tpl, "getGraphOutput", GetGraphOutput);

	Nan::SetPrototypeMethod(tpl, "GetImageDataOutput", GetImageDataOutput);
	Nan::SetPrototypeMethod(tpl, "getImageDataOutput", GetImageDataOutput);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetPolyDataOutput", GetPolyDataOutput);
	Nan::SetPrototypeMethod(tpl, "getPolyDataOutput", GetPolyDataOutput);

	Nan::SetPrototypeMethod(tpl, "GetRectilinearGridOutput", GetRectilinearGridOutput);
	Nan::SetPrototypeMethod(tpl, "getRectilinearGridOutput", GetRectilinearGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredGridOutput", GetStructuredGridOutput);
	Nan::SetPrototypeMethod(tpl, "getStructuredGridOutput", GetStructuredGridOutput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredPointsOutput", GetStructuredPointsOutput);
	Nan::SetPrototypeMethod(tpl, "getStructuredPointsOutput", GetStructuredPointsOutput);

	Nan::SetPrototypeMethod(tpl, "GetTableOutput", GetTableOutput);
	Nan::SetPrototypeMethod(tpl, "getTableOutput", GetTableOutput);

	Nan::SetPrototypeMethod(tpl, "GetUnstructuredGridOutput", GetUnstructuredGridOutput);
	Nan::SetPrototypeMethod(tpl, "getUnstructuredGridOutput", GetUnstructuredGridOutput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

#ifdef VTK_NODE_PLUS_VTKPASSINPUTTYPEALGORITHMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPASSINPUTTYPEALGORITHMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPassInputTypeAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPassInputTypeAlgorithm> native = vtkSmartPointer<vtkPassInputTypeAlgorithm>::New();
		VtkPassInputTypeAlgorithmWrap* obj = new VtkPassInputTypeAlgorithmWrap(native);
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

void VtkPassInputTypeAlgorithmWrap::AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
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

void VtkPassInputTypeAlgorithmWrap::GetGraphOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraphOutput();
	VtkGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphWrap *w = new VtkGraphWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassInputTypeAlgorithmWrap::GetImageDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImageDataOutput();
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassInputTypeAlgorithmWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkDataObject * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
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

void VtkPassInputTypeAlgorithmWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
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

void VtkPassInputTypeAlgorithmWrap::GetPolyDataOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
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

void VtkPassInputTypeAlgorithmWrap::GetRectilinearGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkRectilinearGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRectilinearGridOutput();
	VtkRectilinearGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRectilinearGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRectilinearGridWrap *w = new VtkRectilinearGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassInputTypeAlgorithmWrap::GetStructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredGridOutput();
	VtkStructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassInputTypeAlgorithmWrap::GetStructuredPointsOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkStructuredPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredPointsOutput();
	VtkStructuredPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredPointsWrap *w = new VtkStructuredPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassInputTypeAlgorithmWrap::GetTableOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTableOutput();
	VtkTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableWrap *w = new VtkTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassInputTypeAlgorithmWrap::GetUnstructuredGridOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
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

void VtkPassInputTypeAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	vtkPassInputTypeAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPassInputTypeAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPassInputTypeAlgorithmWrap *w = new VtkPassInputTypeAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPassInputTypeAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPassInputTypeAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPassInputTypeAlgorithmWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPassInputTypeAlgorithmWrap *w = new VtkPassInputTypeAlgorithmWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPassInputTypeAlgorithmWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPassInputTypeAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkPassInputTypeAlgorithmWrap>(info.Holder());
	vtkPassInputTypeAlgorithm *native = (vtkPassInputTypeAlgorithm *)wrapper->native.GetPointer();
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

