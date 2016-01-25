/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkUnstructuredGridGeometryFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkUnstructuredGridGeometryFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkUnstructuredGridGeometryFilterWrap::ptpl;

VtkUnstructuredGridGeometryFilterWrap::VtkUnstructuredGridGeometryFilterWrap()
{ }

VtkUnstructuredGridGeometryFilterWrap::VtkUnstructuredGridGeometryFilterWrap(vtkSmartPointer<vtkUnstructuredGridGeometryFilter> _native)
{ native = _native; }

VtkUnstructuredGridGeometryFilterWrap::~VtkUnstructuredGridGeometryFilterWrap()
{ }

void VtkUnstructuredGridGeometryFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkUnstructuredGridGeometryFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkUnstructuredGridGeometryFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("UnstructuredGridGeometryFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkUnstructuredGridGeometryFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CellClippingOff", CellClippingOff);
	Nan::SetPrototypeMethod(tpl, "cellClippingOff", CellClippingOff);

	Nan::SetPrototypeMethod(tpl, "CellClippingOn", CellClippingOn);
	Nan::SetPrototypeMethod(tpl, "cellClippingOn", CellClippingOn);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "ExtentClippingOff", ExtentClippingOff);
	Nan::SetPrototypeMethod(tpl, "extentClippingOff", ExtentClippingOff);

	Nan::SetPrototypeMethod(tpl, "ExtentClippingOn", ExtentClippingOn);
	Nan::SetPrototypeMethod(tpl, "extentClippingOn", ExtentClippingOn);

	Nan::SetPrototypeMethod(tpl, "GetCellClipping", GetCellClipping);
	Nan::SetPrototypeMethod(tpl, "getCellClipping", GetCellClipping);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtentClipping", GetExtentClipping);
	Nan::SetPrototypeMethod(tpl, "getExtentClipping", GetExtentClipping);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetMerging", GetMerging);
	Nan::SetPrototypeMethod(tpl, "getMerging", GetMerging);

	Nan::SetPrototypeMethod(tpl, "GetOriginalCellIdsName", GetOriginalCellIdsName);
	Nan::SetPrototypeMethod(tpl, "getOriginalCellIdsName", GetOriginalCellIdsName);

	Nan::SetPrototypeMethod(tpl, "GetOriginalPointIdsName", GetOriginalPointIdsName);
	Nan::SetPrototypeMethod(tpl, "getOriginalPointIdsName", GetOriginalPointIdsName);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughCellIds", GetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughCellIds", GetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "GetPassThroughPointIds", GetPassThroughPointIds);
	Nan::SetPrototypeMethod(tpl, "getPassThroughPointIds", GetPassThroughPointIds);

	Nan::SetPrototypeMethod(tpl, "GetPointClipping", GetPointClipping);
	Nan::SetPrototypeMethod(tpl, "getPointClipping", GetPointClipping);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergingOff", MergingOff);
	Nan::SetPrototypeMethod(tpl, "mergingOff", MergingOff);

	Nan::SetPrototypeMethod(tpl, "MergingOn", MergingOn);
	Nan::SetPrototypeMethod(tpl, "mergingOn", MergingOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOff", PassThroughCellIdsOff);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOff", PassThroughCellIdsOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughCellIdsOn", PassThroughCellIdsOn);
	Nan::SetPrototypeMethod(tpl, "passThroughCellIdsOn", PassThroughCellIdsOn);

	Nan::SetPrototypeMethod(tpl, "PassThroughPointIdsOff", PassThroughPointIdsOff);
	Nan::SetPrototypeMethod(tpl, "passThroughPointIdsOff", PassThroughPointIdsOff);

	Nan::SetPrototypeMethod(tpl, "PassThroughPointIdsOn", PassThroughPointIdsOn);
	Nan::SetPrototypeMethod(tpl, "passThroughPointIdsOn", PassThroughPointIdsOn);

	Nan::SetPrototypeMethod(tpl, "PointClippingOff", PointClippingOff);
	Nan::SetPrototypeMethod(tpl, "pointClippingOff", PointClippingOff);

	Nan::SetPrototypeMethod(tpl, "PointClippingOn", PointClippingOn);
	Nan::SetPrototypeMethod(tpl, "pointClippingOn", PointClippingOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCellClipping", SetCellClipping);
	Nan::SetPrototypeMethod(tpl, "setCellClipping", SetCellClipping);

	Nan::SetPrototypeMethod(tpl, "SetExtent", SetExtent);
	Nan::SetPrototypeMethod(tpl, "setExtent", SetExtent);

	Nan::SetPrototypeMethod(tpl, "SetExtentClipping", SetExtentClipping);
	Nan::SetPrototypeMethod(tpl, "setExtentClipping", SetExtentClipping);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetMerging", SetMerging);
	Nan::SetPrototypeMethod(tpl, "setMerging", SetMerging);

	Nan::SetPrototypeMethod(tpl, "SetOriginalCellIdsName", SetOriginalCellIdsName);
	Nan::SetPrototypeMethod(tpl, "setOriginalCellIdsName", SetOriginalCellIdsName);

	Nan::SetPrototypeMethod(tpl, "SetOriginalPointIdsName", SetOriginalPointIdsName);
	Nan::SetPrototypeMethod(tpl, "setOriginalPointIdsName", SetOriginalPointIdsName);

	Nan::SetPrototypeMethod(tpl, "SetPassThroughCellIds", SetPassThroughCellIds);
	Nan::SetPrototypeMethod(tpl, "setPassThroughCellIds", SetPassThroughCellIds);

	Nan::SetPrototypeMethod(tpl, "SetPassThroughPointIds", SetPassThroughPointIds);
	Nan::SetPrototypeMethod(tpl, "setPassThroughPointIds", SetPassThroughPointIds);

	Nan::SetPrototypeMethod(tpl, "SetPointClipping", SetPointClipping);
	Nan::SetPrototypeMethod(tpl, "setPointClipping", SetPointClipping);

}

void VtkUnstructuredGridGeometryFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkUnstructuredGridGeometryFilter> native = vtkSmartPointer<vtkUnstructuredGridGeometryFilter>::New();
		VtkUnstructuredGridGeometryFilterWrap* obj = new VtkUnstructuredGridGeometryFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkUnstructuredGridGeometryFilterWrap::CellClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CellClippingOff();
}

void VtkUnstructuredGridGeometryFilterWrap::CellClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CellClippingOn();
}

void VtkUnstructuredGridGeometryFilterWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkUnstructuredGridGeometryFilterWrap::ExtentClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtentClippingOff();
}

void VtkUnstructuredGridGeometryFilterWrap::ExtentClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtentClippingOn();
}

void VtkUnstructuredGridGeometryFilterWrap::GetCellClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellClipping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridGeometryFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridGeometryFilterWrap::GetExtentClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtentClipping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridGeometryFilterWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIncrementalPointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridGeometryFilterWrap::GetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMerging();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridGeometryFilterWrap::GetOriginalCellIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOriginalCellIdsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridGeometryFilterWrap::GetOriginalPointIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOriginalPointIdsName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkUnstructuredGridGeometryFilterWrap::GetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThroughCellIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridGeometryFilterWrap::GetPassThroughPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassThroughPointIds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridGeometryFilterWrap::GetPointClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointClipping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkUnstructuredGridGeometryFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkUnstructuredGridGeometryFilterWrap::MergingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOff();
}

void VtkUnstructuredGridGeometryFilterWrap::MergingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MergingOn();
}

void VtkUnstructuredGridGeometryFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	vtkUnstructuredGridGeometryFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkUnstructuredGridGeometryFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridGeometryFilterWrap *w = new VtkUnstructuredGridGeometryFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkUnstructuredGridGeometryFilterWrap::PassThroughCellIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOff();
}

void VtkUnstructuredGridGeometryFilterWrap::PassThroughCellIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughCellIdsOn();
}

void VtkUnstructuredGridGeometryFilterWrap::PassThroughPointIdsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughPointIdsOff();
}

void VtkUnstructuredGridGeometryFilterWrap::PassThroughPointIdsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassThroughPointIdsOn();
}

void VtkUnstructuredGridGeometryFilterWrap::PointClippingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointClippingOff();
}

void VtkUnstructuredGridGeometryFilterWrap::PointClippingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PointClippingOn();
}

void VtkUnstructuredGridGeometryFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkUnstructuredGridGeometryFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkUnstructuredGridGeometryFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUnstructuredGridGeometryFilterWrap *w = new VtkUnstructuredGridGeometryFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetCellClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCellClipping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetExtent(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetExtentClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtentClipping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetMerging(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMerging(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetOriginalCellIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOriginalCellIdsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetOriginalPointIdsName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOriginalPointIdsName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetPassThroughCellIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThroughCellIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetPassThroughPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassThroughPointIds(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkUnstructuredGridGeometryFilterWrap::SetPointClipping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkUnstructuredGridGeometryFilterWrap *wrapper = ObjectWrap::Unwrap<VtkUnstructuredGridGeometryFilterWrap>(info.Holder());
	vtkUnstructuredGridGeometryFilter *native = (vtkUnstructuredGridGeometryFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPointClipping(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
