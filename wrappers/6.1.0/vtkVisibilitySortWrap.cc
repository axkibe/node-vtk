/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkVisibilitySortWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkMatrix4x4Wrap.h"
#include "vtkCameraWrap.h"
#include "vtkDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVisibilitySortWrap::ptpl;

VtkVisibilitySortWrap::VtkVisibilitySortWrap()
{ }

VtkVisibilitySortWrap::VtkVisibilitySortWrap(vtkSmartPointer<vtkVisibilitySort> _native)
{ native = _native; }

VtkVisibilitySortWrap::~VtkVisibilitySortWrap()
{ }

void VtkVisibilitySortWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVisibilitySort").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VisibilitySort").ToLocalChecked(), ConstructorGetter);
}

void VtkVisibilitySortWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVisibilitySortWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVisibilitySortWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCamera", GetCamera);
	Nan::SetPrototypeMethod(tpl, "getCamera", GetCamera);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDirection", GetDirection);
	Nan::SetPrototypeMethod(tpl, "getDirection", GetDirection);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetInverseModelTransform", GetInverseModelTransform);
	Nan::SetPrototypeMethod(tpl, "getInverseModelTransform", GetInverseModelTransform);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellsReturned", GetMaxCellsReturned);
	Nan::SetPrototypeMethod(tpl, "getMaxCellsReturned", GetMaxCellsReturned);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellsReturnedMaxValue", GetMaxCellsReturnedMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaxCellsReturnedMaxValue", GetMaxCellsReturnedMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellsReturnedMinValue", GetMaxCellsReturnedMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaxCellsReturnedMinValue", GetMaxCellsReturnedMinValue);

	Nan::SetPrototypeMethod(tpl, "GetModelTransform", GetModelTransform);
	Nan::SetPrototypeMethod(tpl, "getModelTransform", GetModelTransform);

	Nan::SetPrototypeMethod(tpl, "GetNextCells", GetNextCells);
	Nan::SetPrototypeMethod(tpl, "getNextCells", GetNextCells);

	Nan::SetPrototypeMethod(tpl, "InitTraversal", InitTraversal);
	Nan::SetPrototypeMethod(tpl, "initTraversal", InitTraversal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCamera", SetCamera);
	Nan::SetPrototypeMethod(tpl, "setCamera", SetCamera);

	Nan::SetPrototypeMethod(tpl, "SetDirection", SetDirection);
	Nan::SetPrototypeMethod(tpl, "setDirection", SetDirection);

	Nan::SetPrototypeMethod(tpl, "SetDirectionToBackToFront", SetDirectionToBackToFront);
	Nan::SetPrototypeMethod(tpl, "setDirectionToBackToFront", SetDirectionToBackToFront);

	Nan::SetPrototypeMethod(tpl, "SetDirectionToFrontToBack", SetDirectionToFrontToBack);
	Nan::SetPrototypeMethod(tpl, "setDirectionToFrontToBack", SetDirectionToFrontToBack);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetMaxCellsReturned", SetMaxCellsReturned);
	Nan::SetPrototypeMethod(tpl, "setMaxCellsReturned", SetMaxCellsReturned);

	Nan::SetPrototypeMethod(tpl, "SetModelTransform", SetModelTransform);
	Nan::SetPrototypeMethod(tpl, "setModelTransform", SetModelTransform);

	ptpl.Reset( tpl );
}

void VtkVisibilitySortWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVisibilitySortWrap::GetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	vtkCamera * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCamera();
		VtkCameraWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCameraWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCameraWrap *w = new VtkCameraWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVisibilitySortWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVisibilitySortWrap::GetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirection();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVisibilitySortWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	vtkDataSet * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkDataSetWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetWrap *w = new VtkDataSetWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVisibilitySortWrap::GetInverseModelTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInverseModelTransform();
		VtkMatrix4x4Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix4x4Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVisibilitySortWrap::GetMaxCellsReturned(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellsReturned();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVisibilitySortWrap::GetMaxCellsReturnedMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellsReturnedMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVisibilitySortWrap::GetMaxCellsReturnedMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellsReturnedMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVisibilitySortWrap::GetModelTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	vtkMatrix4x4 * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModelTransform();
		VtkMatrix4x4Wrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMatrix4x4Wrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMatrix4x4Wrap *w = new VtkMatrix4x4Wrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVisibilitySortWrap::GetNextCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	vtkIdTypeArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNextCells();
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

void VtkVisibilitySortWrap::InitTraversal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InitTraversal();
}

void VtkVisibilitySortWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
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

void VtkVisibilitySortWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	vtkVisibilitySort * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVisibilitySortWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVisibilitySortWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVisibilitySortWrap *w = new VtkVisibilitySortWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVisibilitySortWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVisibilitySort * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVisibilitySortWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVisibilitySortWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVisibilitySortWrap *w = new VtkVisibilitySortWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVisibilitySortWrap::SetCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCameraWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCameraWrap *a0 = ObjectWrap::Unwrap<VtkCameraWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCamera(
			(vtkCamera *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVisibilitySortWrap::SetDirection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirection(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVisibilitySortWrap::SetDirectionToBackToFront(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDirectionToBackToFront();
}

void VtkVisibilitySortWrap::SetDirectionToFrontToBack(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDirectionToFrontToBack();
}

void VtkVisibilitySortWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVisibilitySortWrap::SetMaxCellsReturned(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxCellsReturned(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVisibilitySortWrap::SetModelTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVisibilitySortWrap *wrapper = ObjectWrap::Unwrap<VtkVisibilitySortWrap>(info.Holder());
	vtkVisibilitySort *native = (vtkVisibilitySort *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMatrix4x4Wrap::ptpl))->HasInstance(info[0]))
	{
		VtkMatrix4x4Wrap *a0 = ObjectWrap::Unwrap<VtkMatrix4x4Wrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetModelTransform(
			(vtkMatrix4x4 *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

