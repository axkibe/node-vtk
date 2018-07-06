/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkExtractCellsWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIdListWrap.h"
#include "../../plus/plus.h"

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

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellList", SetCellList);
	Nan::SetPrototypeMethod(tpl, "setCellList", SetCellList);

#ifdef VTK_NODE_PLUS_VTKEXTRACTCELLSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKEXTRACTCELLSWRAP_INITPTPL
#endif
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
		VtkExtractCellsWrap* obj = new VtkExtractCellsWrap(native);
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
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractCellsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCellsWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCellsWrap>(info.Holder());
	vtkExtractCells *native = (vtkExtractCells *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkExtractCells * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkExtractCellsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractCellsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractCellsWrap *w = new VtkExtractCellsWrap();
		w->native = r;
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

