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
Nan::Persistent<v8::Function> VtkExtractPolyDataGeometryWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkExtractPolyDataGeometryWrap::ptpl;

VtkExtractPolyDataGeometryWrap::VtkExtractPolyDataGeometryWrap()
{ }

VtkExtractPolyDataGeometryWrap::VtkExtractPolyDataGeometryWrap(vtkSmartPointer<vtkExtractPolyDataGeometry> _native)
{ native = _native; }

VtkExtractPolyDataGeometryWrap::~VtkExtractPolyDataGeometryWrap()
{ }

void VtkExtractPolyDataGeometryWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkExtractPolyDataGeometryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkExtractPolyDataGeometry").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ExtractPolyDataGeometry").ToLocalChecked(),tpl->GetFunction());
}

void VtkExtractPolyDataGeometryWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtractBoundaryCells", SetExtractBoundaryCells);
	Nan::SetPrototypeMethod(tpl, "setExtractBoundaryCells", SetExtractBoundaryCells);

	Nan::SetPrototypeMethod(tpl, "SetExtractInside", SetExtractInside);
	Nan::SetPrototypeMethod(tpl, "setExtractInside", SetExtractInside);

	Nan::SetPrototypeMethod(tpl, "SetImplicitFunction", SetImplicitFunction);
	Nan::SetPrototypeMethod(tpl, "setImplicitFunction", SetImplicitFunction);

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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImplicitFunctionWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImplicitFunctionWrap *w = new VtkImplicitFunctionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractPolyDataGeometryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExtractPolyDataGeometryWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractPolyDataGeometryWrap *w = new VtkExtractPolyDataGeometryWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExtractPolyDataGeometryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExtractPolyDataGeometryWrap *wrapper = ObjectWrap::Unwrap<VtkExtractPolyDataGeometryWrap>(info.Holder());
	vtkExtractPolyDataGeometry *native = (vtkExtractPolyDataGeometry *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkExtractPolyDataGeometryWrap::constructor);
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
	if(info.Length() > 0 && info[0]->IsObject())
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
