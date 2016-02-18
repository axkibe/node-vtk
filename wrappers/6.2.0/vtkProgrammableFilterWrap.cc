/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkProgrammableFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkStructuredPointsWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkRectilinearGridWrap.h"
#include "vtkGraphWrap.h"
#include "vtkTableWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkProgrammableFilterWrap::ptpl;

VtkProgrammableFilterWrap::VtkProgrammableFilterWrap()
{ }

VtkProgrammableFilterWrap::VtkProgrammableFilterWrap(vtkSmartPointer<vtkProgrammableFilter> _native)
{ native = _native; }

VtkProgrammableFilterWrap::~VtkProgrammableFilterWrap()
{ }

void VtkProgrammableFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkProgrammableFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ProgrammableFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkProgrammableFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkProgrammableFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkProgrammableFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyArraysOff", CopyArraysOff);
	Nan::SetPrototypeMethod(tpl, "copyArraysOff", CopyArraysOff);

	Nan::SetPrototypeMethod(tpl, "CopyArraysOn", CopyArraysOn);
	Nan::SetPrototypeMethod(tpl, "copyArraysOn", CopyArraysOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCopyArrays", GetCopyArrays);
	Nan::SetPrototypeMethod(tpl, "getCopyArrays", GetCopyArrays);

	Nan::SetPrototypeMethod(tpl, "GetGraphInput", GetGraphInput);
	Nan::SetPrototypeMethod(tpl, "getGraphInput", GetGraphInput);

	Nan::SetPrototypeMethod(tpl, "GetPolyDataInput", GetPolyDataInput);
	Nan::SetPrototypeMethod(tpl, "getPolyDataInput", GetPolyDataInput);

	Nan::SetPrototypeMethod(tpl, "GetRectilinearGridInput", GetRectilinearGridInput);
	Nan::SetPrototypeMethod(tpl, "getRectilinearGridInput", GetRectilinearGridInput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredGridInput", GetStructuredGridInput);
	Nan::SetPrototypeMethod(tpl, "getStructuredGridInput", GetStructuredGridInput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredPointsInput", GetStructuredPointsInput);
	Nan::SetPrototypeMethod(tpl, "getStructuredPointsInput", GetStructuredPointsInput);

	Nan::SetPrototypeMethod(tpl, "GetTableInput", GetTableInput);
	Nan::SetPrototypeMethod(tpl, "getTableInput", GetTableInput);

	Nan::SetPrototypeMethod(tpl, "GetUnstructuredGridInput", GetUnstructuredGridInput);
	Nan::SetPrototypeMethod(tpl, "getUnstructuredGridInput", GetUnstructuredGridInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCopyArrays", SetCopyArrays);
	Nan::SetPrototypeMethod(tpl, "setCopyArrays", SetCopyArrays);

#ifdef VTK_NODE_PLUS_VTKPROGRAMMABLEFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPROGRAMMABLEFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkProgrammableFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProgrammableFilter> native = vtkSmartPointer<vtkProgrammableFilter>::New();
		VtkProgrammableFilterWrap* obj = new VtkProgrammableFilterWrap(native);
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

void VtkProgrammableFilterWrap::CopyArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyArraysOff();
}

void VtkProgrammableFilterWrap::CopyArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyArraysOn();
}

void VtkProgrammableFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProgrammableFilterWrap::GetCopyArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCopyArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProgrammableFilterWrap::GetGraphInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGraphInput();
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

void VtkProgrammableFilterWrap::GetPolyDataInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyDataInput();
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

void VtkProgrammableFilterWrap::GetRectilinearGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkRectilinearGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRectilinearGridInput();
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

void VtkProgrammableFilterWrap::GetStructuredGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredGridInput();
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

void VtkProgrammableFilterWrap::GetStructuredPointsInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkStructuredPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetStructuredPointsInput();
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

void VtkProgrammableFilterWrap::GetTableInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTableInput();
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

void VtkProgrammableFilterWrap::GetUnstructuredGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUnstructuredGridInput();
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

void VtkProgrammableFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkProgrammableFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	vtkProgrammableFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkProgrammableFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkProgrammableFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProgrammableFilterWrap *w = new VtkProgrammableFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProgrammableFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProgrammableFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkProgrammableFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkProgrammableFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProgrammableFilterWrap *w = new VtkProgrammableFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProgrammableFilterWrap::SetCopyArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProgrammableFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProgrammableFilterWrap>(info.Holder());
	vtkProgrammableFilter *native = (vtkProgrammableFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCopyArrays(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

