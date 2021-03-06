/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTreeAlgorithmWrap.h"
#include "vtkAreaLayoutWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAreaLayoutStrategyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAreaLayoutWrap::ptpl;

VtkAreaLayoutWrap::VtkAreaLayoutWrap()
{ }

VtkAreaLayoutWrap::VtkAreaLayoutWrap(vtkSmartPointer<vtkAreaLayout> _native)
{ native = _native; }

VtkAreaLayoutWrap::~VtkAreaLayoutWrap()
{ }

void VtkAreaLayoutWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAreaLayout").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AreaLayout").ToLocalChecked(), ConstructorGetter);
}

void VtkAreaLayoutWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAreaLayoutWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAreaLayoutWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EdgeRoutingPointsOff", EdgeRoutingPointsOff);
	Nan::SetPrototypeMethod(tpl, "edgeRoutingPointsOff", EdgeRoutingPointsOff);

	Nan::SetPrototypeMethod(tpl, "EdgeRoutingPointsOn", EdgeRoutingPointsOn);
	Nan::SetPrototypeMethod(tpl, "edgeRoutingPointsOn", EdgeRoutingPointsOn);

	Nan::SetPrototypeMethod(tpl, "GetAreaArrayName", GetAreaArrayName);
	Nan::SetPrototypeMethod(tpl, "getAreaArrayName", GetAreaArrayName);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdgeRoutingPoints", GetEdgeRoutingPoints);
	Nan::SetPrototypeMethod(tpl, "getEdgeRoutingPoints", GetEdgeRoutingPoints);

	Nan::SetPrototypeMethod(tpl, "GetLayoutStrategy", GetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "getLayoutStrategy", GetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAreaArrayName", SetAreaArrayName);
	Nan::SetPrototypeMethod(tpl, "setAreaArrayName", SetAreaArrayName);

	Nan::SetPrototypeMethod(tpl, "SetEdgeRoutingPoints", SetEdgeRoutingPoints);
	Nan::SetPrototypeMethod(tpl, "setEdgeRoutingPoints", SetEdgeRoutingPoints);

	Nan::SetPrototypeMethod(tpl, "SetLayoutStrategy", SetLayoutStrategy);
	Nan::SetPrototypeMethod(tpl, "setLayoutStrategy", SetLayoutStrategy);

	Nan::SetPrototypeMethod(tpl, "SetSizeArrayName", SetSizeArrayName);
	Nan::SetPrototypeMethod(tpl, "setSizeArrayName", SetSizeArrayName);

#ifdef VTK_NODE_PLUS_VTKAREALAYOUTWRAP_INITPTPL
	VTK_NODE_PLUS_VTKAREALAYOUTWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAreaLayoutWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAreaLayout> native = vtkSmartPointer<vtkAreaLayout>::New();
		VtkAreaLayoutWrap* obj = new VtkAreaLayoutWrap(native);
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

void VtkAreaLayoutWrap::EdgeRoutingPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgeRoutingPointsOff();
}

void VtkAreaLayoutWrap::EdgeRoutingPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EdgeRoutingPointsOn();
}

void VtkAreaLayoutWrap::GetAreaArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAreaArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAreaLayoutWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAreaLayoutWrap::GetEdgeRoutingPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEdgeRoutingPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAreaLayoutWrap::GetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	vtkAreaLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLayoutStrategy();
	VtkAreaLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAreaLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAreaLayoutStrategyWrap *w = new VtkAreaLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaLayoutWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAreaLayoutWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
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

void VtkAreaLayoutWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	vtkAreaLayout * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAreaLayoutWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAreaLayoutWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAreaLayoutWrap *w = new VtkAreaLayoutWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaLayoutWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAreaLayout * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAreaLayoutWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAreaLayoutWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAreaLayoutWrap *w = new VtkAreaLayoutWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaLayoutWrap::SetAreaArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAreaArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaLayoutWrap::SetEdgeRoutingPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEdgeRoutingPoints(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaLayoutWrap::SetLayoutStrategy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAreaLayoutStrategyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAreaLayoutStrategyWrap *a0 = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLayoutStrategy(
			(vtkAreaLayoutStrategy *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaLayoutWrap::SetSizeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutWrap>(info.Holder());
	vtkAreaLayout *native = (vtkAreaLayout *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSizeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

