/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkPointDataToCellDataWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointDataToCellDataWrap::ptpl;

VtkPointDataToCellDataWrap::VtkPointDataToCellDataWrap()
{ }

VtkPointDataToCellDataWrap::VtkPointDataToCellDataWrap(vtkSmartPointer<vtkPointDataToCellData> _native)
{ native = _native; }

VtkPointDataToCellDataWrap::~VtkPointDataToCellDataWrap()
{ }

void VtkPointDataToCellDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPointDataToCellData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PointDataToCellData").ToLocalChecked(), ConstructorGetter);
}

void VtkPointDataToCellDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointDataToCellDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointDataToCellDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CategoricalDataOff", CategoricalDataOff);
	Nan::SetPrototypeMethod(tpl, "categoricalDataOff", CategoricalDataOff);

	Nan::SetPrototypeMethod(tpl, "CategoricalDataOn", CategoricalDataOn);
	Nan::SetPrototypeMethod(tpl, "categoricalDataOn", CategoricalDataOn);

	Nan::SetPrototypeMethod(tpl, "GetCategoricalData", GetCategoricalData);
	Nan::SetPrototypeMethod(tpl, "getCategoricalData", GetCategoricalData);

	Nan::SetPrototypeMethod(tpl, "GetPassPointData", GetPassPointData);
	Nan::SetPrototypeMethod(tpl, "getPassPointData", GetPassPointData);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassPointDataOff", PassPointDataOff);
	Nan::SetPrototypeMethod(tpl, "passPointDataOff", PassPointDataOff);

	Nan::SetPrototypeMethod(tpl, "PassPointDataOn", PassPointDataOn);
	Nan::SetPrototypeMethod(tpl, "passPointDataOn", PassPointDataOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCategoricalData", SetCategoricalData);
	Nan::SetPrototypeMethod(tpl, "setCategoricalData", SetCategoricalData);

	Nan::SetPrototypeMethod(tpl, "SetPassPointData", SetPassPointData);
	Nan::SetPrototypeMethod(tpl, "setPassPointData", SetPassPointData);

#ifdef VTK_NODE_PLUS_VTKPOINTDATATOCELLDATAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTDATATOCELLDATAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPointDataToCellDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPointDataToCellData> native = vtkSmartPointer<vtkPointDataToCellData>::New();
		VtkPointDataToCellDataWrap* obj = new VtkPointDataToCellDataWrap(native);
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

void VtkPointDataToCellDataWrap::CategoricalDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CategoricalDataOff();
}

void VtkPointDataToCellDataWrap::CategoricalDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CategoricalDataOn();
}

void VtkPointDataToCellDataWrap::GetCategoricalData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCategoricalData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDataToCellDataWrap::GetPassPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassPointData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointDataToCellDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
	vtkPointDataToCellData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPointDataToCellDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointDataToCellDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointDataToCellDataWrap *w = new VtkPointDataToCellDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointDataToCellDataWrap::PassPointDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointDataOff();
}

void VtkPointDataToCellDataWrap::PassPointDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointDataOn();
}

void VtkPointDataToCellDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPointDataToCellData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPointDataToCellDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointDataToCellDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointDataToCellDataWrap *w = new VtkPointDataToCellDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDataToCellDataWrap::SetCategoricalData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCategoricalData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointDataToCellDataWrap::SetPassPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointDataToCellDataWrap *wrapper = ObjectWrap::Unwrap<VtkPointDataToCellDataWrap>(info.Holder());
	vtkPointDataToCellData *native = (vtkPointDataToCellData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassPointData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

