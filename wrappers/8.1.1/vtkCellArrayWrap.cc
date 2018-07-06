/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkCellArrayWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIdListWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellArrayWrap::ptpl;

VtkCellArrayWrap::VtkCellArrayWrap()
{ }

VtkCellArrayWrap::VtkCellArrayWrap(vtkSmartPointer<vtkCellArray> _native)
{ native = _native; }

VtkCellArrayWrap::~VtkCellArrayWrap()
{ }

void VtkCellArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellArray").ToLocalChecked(), ConstructorGetter);
}

void VtkCellArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActualMemorySize", GetActualMemorySize);
	Nan::SetPrototypeMethod(tpl, "getActualMemorySize", GetActualMemorySize);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetNextCell", GetNextCell);
	Nan::SetPrototypeMethod(tpl, "getNextCell", GetNextCell);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

	Nan::SetPrototypeMethod(tpl, "UpdateCellCount", UpdateCellCount);
	Nan::SetPrototypeMethod(tpl, "updateCellCount", UpdateCellCount);

#ifdef VTK_NODE_PLUS_VTKCELLARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellArray> native = vtkSmartPointer<vtkCellArray>::New();
		VtkCellArrayWrap* obj = new VtkCellArrayWrap(native);
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

void VtkCellArrayWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCellArrayWrap *a0 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkCellArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellArrayWrap::GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActualMemorySize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellArrayWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetData();
	VtkIdTypeArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdTypeArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellArrayWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellArrayWrap::GetNextCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNextCell(
			(vtkIdList *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellArrayWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkCellArrayWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkCellArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	vtkCellArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCellArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellArrayWrap *w = new VtkCellArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellArrayWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkCellArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCellArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCellArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellArrayWrap *w = new VtkCellArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellArrayWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

void VtkCellArrayWrap::UpdateCellCount(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellArrayWrap *wrapper = ObjectWrap::Unwrap<VtkCellArrayWrap>(info.Holder());
	vtkCellArray *native = (vtkCellArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UpdateCellCount(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

