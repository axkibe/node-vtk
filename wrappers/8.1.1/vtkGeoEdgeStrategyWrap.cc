/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkEdgeLayoutStrategyWrap.h"
#include "vtkGeoEdgeStrategyWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoEdgeStrategyWrap::ptpl;

VtkGeoEdgeStrategyWrap::VtkGeoEdgeStrategyWrap()
{ }

VtkGeoEdgeStrategyWrap::VtkGeoEdgeStrategyWrap(vtkSmartPointer<vtkGeoEdgeStrategy> _native)
{ native = _native; }

VtkGeoEdgeStrategyWrap::~VtkGeoEdgeStrategyWrap()
{ }

void VtkGeoEdgeStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoEdgeStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoEdgeStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoEdgeStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoEdgeStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkEdgeLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkEdgeLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoEdgeStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetExplodeFactor", GetExplodeFactor);
	Nan::SetPrototypeMethod(tpl, "getExplodeFactor", GetExplodeFactor);

	Nan::SetPrototypeMethod(tpl, "GetGlobeRadius", GetGlobeRadius);
	Nan::SetPrototypeMethod(tpl, "getGlobeRadius", GetGlobeRadius);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubdivisions", GetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubdivisions", GetNumberOfSubdivisions);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExplodeFactor", SetExplodeFactor);
	Nan::SetPrototypeMethod(tpl, "setExplodeFactor", SetExplodeFactor);

	Nan::SetPrototypeMethod(tpl, "SetGlobeRadius", SetGlobeRadius);
	Nan::SetPrototypeMethod(tpl, "setGlobeRadius", SetGlobeRadius);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSubdivisions", SetNumberOfSubdivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSubdivisions", SetNumberOfSubdivisions);

#ifdef VTK_NODE_PLUS_VTKGEOEDGESTRATEGYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGEOEDGESTRATEGYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGeoEdgeStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoEdgeStrategy> native = vtkSmartPointer<vtkGeoEdgeStrategy>::New();
		VtkGeoEdgeStrategyWrap* obj = new VtkGeoEdgeStrategyWrap(native);
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

void VtkGeoEdgeStrategyWrap::GetExplodeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExplodeFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoEdgeStrategyWrap::GetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobeRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoEdgeStrategyWrap::GetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSubdivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoEdgeStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkGeoEdgeStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	vtkGeoEdgeStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGeoEdgeStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoEdgeStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoEdgeStrategyWrap *w = new VtkGeoEdgeStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoEdgeStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGeoEdgeStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGeoEdgeStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoEdgeStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoEdgeStrategyWrap *w = new VtkGeoEdgeStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoEdgeStrategyWrap::SetExplodeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExplodeFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoEdgeStrategyWrap::SetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlobeRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoEdgeStrategyWrap::SetNumberOfSubdivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoEdgeStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkGeoEdgeStrategyWrap>(info.Holder());
	vtkGeoEdgeStrategy *native = (vtkGeoEdgeStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSubdivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

