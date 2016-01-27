/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAlgorithmWrap.h"
#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkObjectWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkDataObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridAlgorithmWrap::ptpl;

VtkStructuredGridAlgorithmWrap::VtkStructuredGridAlgorithmWrap()
{ }

VtkStructuredGridAlgorithmWrap::VtkStructuredGridAlgorithmWrap(vtkSmartPointer<vtkStructuredGridAlgorithm> _native)
{ native = _native; }

VtkStructuredGridAlgorithmWrap::~VtkStructuredGridAlgorithmWrap()
{ }

void VtkStructuredGridAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStructuredGridAlgorithm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StructuredGridAlgorithm").ToLocalChecked(), ConstructorGetter);
}

void VtkStructuredGridAlgorithmWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStructuredGridAlgorithmWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStructuredGridAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddInputData", AddInputData);
	Nan::SetPrototypeMethod(tpl, "addInputData", AddInputData);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetStructuredGridInput", GetStructuredGridInput);
	Nan::SetPrototypeMethod(tpl, "getStructuredGridInput", GetStructuredGridInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetOutput", SetOutput);
	Nan::SetPrototypeMethod(tpl, "setOutput", SetOutput);

	ptpl.Reset( tpl );
}

void VtkStructuredGridAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridAlgorithm> native = vtkSmartPointer<vtkStructuredGridAlgorithm>::New();
		VtkStructuredGridAlgorithmWrap* obj = new VtkStructuredGridAlgorithmWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredGridAlgorithmWrap::AddInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
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

void VtkStructuredGridAlgorithmWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridAlgorithmWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetInput(
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

void VtkStructuredGridAlgorithmWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkStructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
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
		return;
	}
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
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

void VtkStructuredGridAlgorithmWrap::GetStructuredGridInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkStructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetStructuredGridInput(
			info[0]->Int32Value()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridAlgorithmWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
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

void VtkStructuredGridAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
	vtkStructuredGridAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStructuredGridAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridAlgorithmWrap *w = new VtkStructuredGridAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGridAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStructuredGridAlgorithmWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridAlgorithmWrap *w = new VtkStructuredGridAlgorithmWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridAlgorithmWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
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

void VtkStructuredGridAlgorithmWrap::SetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridAlgorithmWrap>(info.Holder());
	vtkStructuredGridAlgorithm *native = (vtkStructuredGridAlgorithm *)wrapper->native.GetPointer();
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

