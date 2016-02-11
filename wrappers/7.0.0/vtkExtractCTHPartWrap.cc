/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMultiBlockDataSetAlgorithmWrap.h"
#include "vtkExtractCTHPartWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkPlaneWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractCTHPartWrap::ptpl;

VtkExtractCTHPartWrap::VtkExtractCTHPartWrap()
{ }

VtkExtractCTHPartWrap::VtkExtractCTHPartWrap(vtkSmartPointer<vtkExtractCTHPart> _native)
{ native = _native; }

VtkExtractCTHPartWrap::~VtkExtractCTHPartWrap()
{ }

void VtkExtractCTHPartWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractCTHPart").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractCTHPart").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractCTHPartWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractCTHPartWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMultiBlockDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMultiBlockDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractCTHPartWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddVolumeArrayName", AddVolumeArrayName);
	Nan::SetPrototypeMethod(tpl, "addVolumeArrayName", AddVolumeArrayName);

	Nan::SetPrototypeMethod(tpl, "CappingOff", CappingOff);
	Nan::SetPrototypeMethod(tpl, "cappingOff", CappingOff);

	Nan::SetPrototypeMethod(tpl, "CappingOn", CappingOn);
	Nan::SetPrototypeMethod(tpl, "cappingOn", CappingOn);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOff", GenerateTrianglesOff);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOff", GenerateTrianglesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateTrianglesOn", GenerateTrianglesOn);
	Nan::SetPrototypeMethod(tpl, "generateTrianglesOn", GenerateTrianglesOn);

	Nan::SetPrototypeMethod(tpl, "GetCapping", GetCapping);
	Nan::SetPrototypeMethod(tpl, "getCapping", GetCapping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipPlane", GetClipPlane);
	Nan::SetPrototypeMethod(tpl, "getClipPlane", GetClipPlane);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetGenerateTriangles", GetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "getGenerateTriangles", GetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVolumeArrayNames", GetNumberOfVolumeArrayNames);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVolumeArrayNames", GetNumberOfVolumeArrayNames);

	Nan::SetPrototypeMethod(tpl, "GetRemoveGhostCells", GetRemoveGhostCells);
	Nan::SetPrototypeMethod(tpl, "getRemoveGhostCells", GetRemoveGhostCells);

	Nan::SetPrototypeMethod(tpl, "GetVolumeArrayName", GetVolumeArrayName);
	Nan::SetPrototypeMethod(tpl, "getVolumeArrayName", GetVolumeArrayName);

	Nan::SetPrototypeMethod(tpl, "GetVolumeFractionSurfaceValue", GetVolumeFractionSurfaceValue);
	Nan::SetPrototypeMethod(tpl, "getVolumeFractionSurfaceValue", GetVolumeFractionSurfaceValue);

	Nan::SetPrototypeMethod(tpl, "GetVolumeFractionSurfaceValueMaxValue", GetVolumeFractionSurfaceValueMaxValue);
	Nan::SetPrototypeMethod(tpl, "getVolumeFractionSurfaceValueMaxValue", GetVolumeFractionSurfaceValueMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetVolumeFractionSurfaceValueMinValue", GetVolumeFractionSurfaceValueMinValue);
	Nan::SetPrototypeMethod(tpl, "getVolumeFractionSurfaceValueMinValue", GetVolumeFractionSurfaceValueMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveGhostCellsOff", RemoveGhostCellsOff);
	Nan::SetPrototypeMethod(tpl, "removeGhostCellsOff", RemoveGhostCellsOff);

	Nan::SetPrototypeMethod(tpl, "RemoveGhostCellsOn", RemoveGhostCellsOn);
	Nan::SetPrototypeMethod(tpl, "removeGhostCellsOn", RemoveGhostCellsOn);

	Nan::SetPrototypeMethod(tpl, "RemoveVolumeArrayNames", RemoveVolumeArrayNames);
	Nan::SetPrototypeMethod(tpl, "removeVolumeArrayNames", RemoveVolumeArrayNames);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCapping", SetCapping);
	Nan::SetPrototypeMethod(tpl, "setCapping", SetCapping);

	Nan::SetPrototypeMethod(tpl, "SetClipPlane", SetClipPlane);
	Nan::SetPrototypeMethod(tpl, "setClipPlane", SetClipPlane);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	Nan::SetPrototypeMethod(tpl, "SetGenerateTriangles", SetGenerateTriangles);
	Nan::SetPrototypeMethod(tpl, "setGenerateTriangles", SetGenerateTriangles);

	Nan::SetPrototypeMethod(tpl, "SetRemoveGhostCells", SetRemoveGhostCells);
	Nan::SetPrototypeMethod(tpl, "setRemoveGhostCells", SetRemoveGhostCells);

	Nan::SetPrototypeMethod(tpl, "SetVolumeFractionSurfaceValue", SetVolumeFractionSurfaceValue);
	Nan::SetPrototypeMethod(tpl, "setVolumeFractionSurfaceValue", SetVolumeFractionSurfaceValue);

	ptpl.Reset( tpl );
}

void VtkExtractCTHPartWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractCTHPart> native = vtkSmartPointer<vtkExtractCTHPart>::New();
		VtkExtractCTHPartWrap* obj = new VtkExtractCTHPartWrap(native);
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

void VtkExtractCTHPartWrap::AddVolumeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddVolumeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::CappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOff();
}

void VtkExtractCTHPartWrap::CappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CappingOn();
}

void VtkExtractCTHPartWrap::GenerateTrianglesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOff();
}

void VtkExtractCTHPartWrap::GenerateTrianglesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateTrianglesOn();
}

void VtkExtractCTHPartWrap::GetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractCTHPartWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractCTHPartWrap::GetClipPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	vtkPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipPlane();
	VtkPlaneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlaneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWrap *w = new VtkPlaneWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractCTHPartWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
	VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractCTHPartWrap::GetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateTriangles();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractCTHPartWrap::GetNumberOfVolumeArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfVolumeArrayNames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractCTHPartWrap::GetRemoveGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRemoveGhostCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractCTHPartWrap::GetVolumeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetVolumeArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::GetVolumeFractionSurfaceValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeFractionSurfaceValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractCTHPartWrap::GetVolumeFractionSurfaceValueMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeFractionSurfaceValueMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractCTHPartWrap::GetVolumeFractionSurfaceValueMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeFractionSurfaceValueMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractCTHPartWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
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

void VtkExtractCTHPartWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	vtkExtractCTHPart * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkExtractCTHPartWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractCTHPartWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractCTHPartWrap *w = new VtkExtractCTHPartWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractCTHPartWrap::RemoveGhostCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveGhostCellsOff();
}

void VtkExtractCTHPartWrap::RemoveGhostCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveGhostCellsOn();
}

void VtkExtractCTHPartWrap::RemoveVolumeArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveVolumeArrayNames();
}

void VtkExtractCTHPartWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractCTHPart * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkExtractCTHPartWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractCTHPartWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractCTHPartWrap *w = new VtkExtractCTHPartWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::SetCapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCapping(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::SetClipPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::SetGenerateTriangles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateTriangles(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::SetRemoveGhostCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRemoveGhostCells(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractCTHPartWrap::SetVolumeFractionSurfaceValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractCTHPartWrap *wrapper = ObjectWrap::Unwrap<VtkExtractCTHPartWrap>(info.Holder());
	vtkExtractCTHPart *native = (vtkExtractCTHPart *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolumeFractionSurfaceValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

