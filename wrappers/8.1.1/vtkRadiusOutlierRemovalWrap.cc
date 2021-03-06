/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPointCloudFilterWrap.h"
#include "vtkRadiusOutlierRemovalWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractPointLocatorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRadiusOutlierRemovalWrap::ptpl;

VtkRadiusOutlierRemovalWrap::VtkRadiusOutlierRemovalWrap()
{ }

VtkRadiusOutlierRemovalWrap::VtkRadiusOutlierRemovalWrap(vtkSmartPointer<vtkRadiusOutlierRemoval> _native)
{ native = _native; }

VtkRadiusOutlierRemovalWrap::~VtkRadiusOutlierRemovalWrap()
{ }

void VtkRadiusOutlierRemovalWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRadiusOutlierRemoval").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RadiusOutlierRemoval").ToLocalChecked(), ConstructorGetter);
}

void VtkRadiusOutlierRemovalWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRadiusOutlierRemovalWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointCloudFilterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointCloudFilterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRadiusOutlierRemovalWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNeighbors", GetNumberOfNeighbors);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNeighbors", GetNumberOfNeighbors);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNeighborsMaxValue", GetNumberOfNeighborsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNeighborsMaxValue", GetNumberOfNeighborsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfNeighborsMinValue", GetNumberOfNeighborsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfNeighborsMinValue", GetNumberOfNeighborsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMaxValue", GetRadiusMaxValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMaxValue", GetRadiusMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetRadiusMinValue", GetRadiusMinValue);
	Nan::SetPrototypeMethod(tpl, "getRadiusMinValue", GetRadiusMinValue);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfNeighbors", SetNumberOfNeighbors);
	Nan::SetPrototypeMethod(tpl, "setNumberOfNeighbors", SetNumberOfNeighbors);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

#ifdef VTK_NODE_PLUS_VTKRADIUSOUTLIERREMOVALWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRADIUSOUTLIERREMOVALWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkRadiusOutlierRemovalWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRadiusOutlierRemoval> native = vtkSmartPointer<vtkRadiusOutlierRemoval>::New();
		VtkRadiusOutlierRemovalWrap* obj = new VtkRadiusOutlierRemovalWrap(native);
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

void VtkRadiusOutlierRemovalWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	vtkAbstractPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
	VtkAbstractPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractPointLocatorWrap *w = new VtkAbstractPointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRadiusOutlierRemovalWrap::GetNumberOfNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNeighbors();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRadiusOutlierRemovalWrap::GetNumberOfNeighborsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNeighborsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRadiusOutlierRemovalWrap::GetNumberOfNeighborsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfNeighborsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRadiusOutlierRemovalWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRadiusOutlierRemovalWrap::GetRadiusMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRadiusOutlierRemovalWrap::GetRadiusMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadiusMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRadiusOutlierRemovalWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	vtkRadiusOutlierRemoval * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRadiusOutlierRemovalWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRadiusOutlierRemovalWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRadiusOutlierRemovalWrap *w = new VtkRadiusOutlierRemovalWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRadiusOutlierRemovalWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkRadiusOutlierRemoval * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkRadiusOutlierRemovalWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRadiusOutlierRemovalWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRadiusOutlierRemovalWrap *w = new VtkRadiusOutlierRemovalWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRadiusOutlierRemovalWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkAbstractPointLocatorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkAbstractPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRadiusOutlierRemovalWrap::SetNumberOfNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfNeighbors(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRadiusOutlierRemovalWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRadiusOutlierRemovalWrap *wrapper = ObjectWrap::Unwrap<VtkRadiusOutlierRemovalWrap>(info.Holder());
	vtkRadiusOutlierRemoval *native = (vtkRadiusOutlierRemoval *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

