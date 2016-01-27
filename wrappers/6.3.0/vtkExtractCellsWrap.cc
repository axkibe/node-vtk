/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkExtractCellsWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdListWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractCellsWrap::ptpl;

VtkExtractCellsWrap::VtkExtractCellsWrap()
{ }

VtkExtractCellsWrap::VtkExtractCellsWrap(vtkSmartPointer<vtkExtractCells> _native)
{ native = _native; }

VtkExtractCellsWrap::~VtkExtractCellsWrap()
{ }

void VtkExtractCellsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractCells").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractCells").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractCellsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractCellsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractCellsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddCellList", AddCellList);
	Nan::SetPrototypeMethod(tpl, "addCellList", AddCellList);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellList", SetCellList);
	Nan::SetPrototypeMethod(tpl, "setCellList", SetCellList);

	ptpl.Reset( tpl );
}

void VtkExtractCellsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractCells> native = vtkSmartPointer<vtkExtractCells>::New();
		VtkExtractCellsWrap* obj = new VtkExtractCellsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractCellsWrap::AddCellList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCellsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCellsWrap>(info.Holder());
	vtkExtractCells *native = (vtkExtractCells *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddCellList(
			(vtkIdList *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCellsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCellsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCellsWrap>(info.Holder());
	vtkExtractCells *native = (vtkExtractCells *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractCellsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCellsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCellsWrap>(info.Holder());
	vtkExtractCells *native = (vtkExtractCells *)wrapper->native.GetPointer();
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

void VtkExtractCellsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCellsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCellsWrap>(info.Holder());
	vtkExtractCells *native = (vtkExtractCells *)wrapper->native.GetPointer();
	vtkExtractCells * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtractCellsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractCellsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractCellsWrap *w = new VtkExtractCellsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractCellsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCellsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCellsWrap>(info.Holder());
	vtkExtractCells *native = (vtkExtractCells *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractCells * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtractCellsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractCellsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractCellsWrap *w = new VtkExtractCellsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCellsWrap::SetCellList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCellsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCellsWrap>(info.Holder());
	vtkExtractCells *native = (vtkExtractCells *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellList(
			(vtkIdList *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

