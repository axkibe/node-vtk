/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetAlgorithmWrap.h"
#include "vtkCellDataToPointDataWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellDataToPointDataWrap::ptpl;

VtkCellDataToPointDataWrap::VtkCellDataToPointDataWrap()
{ }

VtkCellDataToPointDataWrap::VtkCellDataToPointDataWrap(vtkSmartPointer<vtkCellDataToPointData> _native)
{ native = _native; }

VtkCellDataToPointDataWrap::~VtkCellDataToPointDataWrap()
{ }

void VtkCellDataToPointDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellDataToPointData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellDataToPointData").ToLocalChecked(), ConstructorGetter);
}

void VtkCellDataToPointDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellDataToPointDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellDataToPointDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPassCellData", GetPassCellData);
	Nan::SetPrototypeMethod(tpl, "getPassCellData", GetPassCellData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassCellDataOff", PassCellDataOff);
	Nan::SetPrototypeMethod(tpl, "passCellDataOff", PassCellDataOff);

	Nan::SetPrototypeMethod(tpl, "PassCellDataOn", PassCellDataOn);
	Nan::SetPrototypeMethod(tpl, "passCellDataOn", PassCellDataOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPassCellData", SetPassCellData);
	Nan::SetPrototypeMethod(tpl, "setPassCellData", SetPassCellData);

#ifdef VTK_NODE_PLUS_VTKCELLDATATOPOINTDATAWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLDATATOPOINTDATAWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellDataToPointDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellDataToPointData> native = vtkSmartPointer<vtkCellDataToPointData>::New();
		VtkCellDataToPointDataWrap* obj = new VtkCellDataToPointDataWrap(native);
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

void VtkCellDataToPointDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellDataToPointDataWrap::GetPassCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassCellData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellDataToPointDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
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

void VtkCellDataToPointDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
	vtkCellDataToPointData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCellDataToPointDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellDataToPointDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellDataToPointDataWrap *w = new VtkCellDataToPointDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellDataToPointDataWrap::PassCellDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellDataOff();
}

void VtkCellDataToPointDataWrap::PassCellDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassCellDataOn();
}

void VtkCellDataToPointDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellDataToPointData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCellDataToPointDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellDataToPointDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellDataToPointDataWrap *w = new VtkCellDataToPointDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellDataToPointDataWrap::SetPassCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellDataToPointDataWrap *wrapper = ObjectWrap::Unwrap<VtkCellDataToPointDataWrap>(info.Holder());
	vtkCellDataToPointData *native = (vtkCellDataToPointData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassCellData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

