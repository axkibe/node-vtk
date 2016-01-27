/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkExtractPolyDataGeometryWrap.h"
#include "vtkObjectWrap.h"
#include "vtkImplicitFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExtractPolyDataGeometryWrap::ptpl;

VtkExtractPolyDataGeometryWrap::VtkExtractPolyDataGeometryWrap()
{ }

VtkExtractPolyDataGeometryWrap::VtkExtractPolyDataGeometryWrap(vtkSmartPointer<vtkExtractPolyDataGeometry> _native)
{ native = _native; }

VtkExtractPolyDataGeometryWrap::~VtkExtractPolyDataGeometryWrap()
{ }

void VtkExtractPolyDataGeometryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExtractPolyDataGeometry").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExtractPolyDataGeometry").ToLocalChecked(), ConstructorGetter);
}

void VtkExtractPolyDataGeometryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExtractPolyDataGeometryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExtractPolyDataGeometryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ExtractBoundaryCellsOff", ExtractBoundaryCellsOff);
	Nan::SetPrototypeMethod(tpl, "extractBoundaryCellsOff", ExtractBoundaryCellsOff);

	Nan::SetPrototypeMethod(tpl, "ExtractBoundaryCellsOn", ExtractBoundaryCellsOn);
	Nan::SetPrototypeMethod(tpl, "extractBoundaryCellsOn", ExtractBoundaryCellsOn);

	Nan::SetPrototypeMethod(tpl, "ExtractInsideOff", ExtractInsideOff);
	Nan::SetPrototypeMethod(tpl, "extractInsideOff", ExtractInsideOff);

	Nan::SetPrototypeMethod(tpl, "ExtractInsideOn", ExtractInsideOn);
	Nan::SetPrototypeMethod(tpl, "extractInsideOn", ExtractInsideOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtractBoundaryCells", GetExtractBoundaryCells);
	Nan::SetPrototypeMethod(tpl, "getExtractBoundaryCells", GetExtractBoundaryCells);

	Nan::SetPrototypeMethod(tpl, "GetExtractInside", GetExtractInside);
	Nan::SetPrototypeMethod(tpl, "getExtractInside", GetExtractInside);

	Nan::SetPrototypeMethod(tpl, "GetImplicitFunction", GetImplicitFunction);
	Nan::SetPrototypeMethod(tpl, "getImplicitFunction", GetImplicitFunction);

	Nan::SetPrototypeMethod(tpl, "GetPassPoints", GetPassPoints);
	Nan::SetPrototypeMethod(tpl, "getPassPoints", GetPassPoints);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PassPointsOff", PassPointsOff);
	Nan::SetPrototypeMethod(tpl, "passPointsOff", PassPointsOff);

	Nan::SetPrototypeMethod(tpl, "PassPointsOn", PassPointsOn);
	Nan::SetPrototypeMethod(tpl, "passPointsOn", PassPointsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtractBoundaryCells", SetExtractBoundaryCells);
	Nan::SetPrototypeMethod(tpl, "setExtractBoundaryCells", SetExtractBoundaryCells);

	Nan::SetPrototypeMethod(tpl, "SetExtractInside", SetExtractInside);
	Nan::SetPrototypeMethod(tpl, "setExtractInside", SetExtractInside);

	Nan::SetPrototypeMethod(tpl, "SetImplicitFunction", SetImplicitFunction);
	Nan::SetPrototypeMethod(tpl, "setImplicitFunction", SetImplicitFunction);

	Nan::SetPrototypeMethod(tpl, "SetPassPoints", SetPassPoints);
	Nan::SetPrototypeMethod(tpl, "setPassPoints", SetPassPoints);

	ptpl.Reset( tpl );
}

void VtkExtractPolyDataGeometryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExtractPolyDataGeometry> native = vtkSmartPointer<vtkExtractPolyDataGeometry>::New();
		VtkExtractPolyDataGeometryWrap* obj = new VtkExtractPolyDataGeometryWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExtractPolyDataGeometryWrap::ExtractBoundaryCellsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractBoundaryCellsOff();
}

void VtkExtractPolyDataGeometryWrap::ExtractBoundaryCellsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractBoundaryCellsOn();
}

void VtkExtractPolyDataGeometryWrap::ExtractInsideOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractInsideOff();
}

void VtkExtractPolyDataGeometryWrap::ExtractInsideOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ExtractInsideOn();
}

void VtkExtractPolyDataGeometryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExtractPolyDataGeometryWrap::GetExtractBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractBoundaryCells();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractPolyDataGeometryWrap::GetExtractInside(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtractInside();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractPolyDataGeometryWrap::GetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	vtkImplicitFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImplicitFunction();
		VtkImplicitFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImplicitFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionWrap *w = new VtkImplicitFunctionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractPolyDataGeometryWrap::GetPassPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPassPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExtractPolyDataGeometryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
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

void VtkExtractPolyDataGeometryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	vtkExtractPolyDataGeometry * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExtractPolyDataGeometryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractPolyDataGeometryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractPolyDataGeometryWrap *w = new VtkExtractPolyDataGeometryWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractPolyDataGeometryWrap::PassPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointsOff();
}

void VtkExtractPolyDataGeometryWrap::PassPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PassPointsOn();
}

void VtkExtractPolyDataGeometryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExtractPolyDataGeometry * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExtractPolyDataGeometryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExtractPolyDataGeometryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExtractPolyDataGeometryWrap *w = new VtkExtractPolyDataGeometryWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractPolyDataGeometryWrap::SetExtractBoundaryCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractBoundaryCells(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractPolyDataGeometryWrap::SetExtractInside(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtractInside(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractPolyDataGeometryWrap::SetImplicitFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImplicitFunctionWrap *a0 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImplicitFunction(
			(vtkImplicitFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExtractPolyDataGeometryWrap::SetPassPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPassPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

