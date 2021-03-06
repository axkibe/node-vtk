/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkGraphLayoutStrategyWrap.h"
#include "vtkAssignCoordinatesLayoutStrategyWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAssignCoordinatesLayoutStrategyWrap::ptpl;

VtkAssignCoordinatesLayoutStrategyWrap::VtkAssignCoordinatesLayoutStrategyWrap()
{ }

VtkAssignCoordinatesLayoutStrategyWrap::VtkAssignCoordinatesLayoutStrategyWrap(vtkSmartPointer<vtkAssignCoordinatesLayoutStrategy> _native)
{ native = _native; }

VtkAssignCoordinatesLayoutStrategyWrap::~VtkAssignCoordinatesLayoutStrategyWrap()
{ }

void VtkAssignCoordinatesLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAssignCoordinatesLayoutStrategy").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AssignCoordinatesLayoutStrategy").ToLocalChecked(), ConstructorGetter);
}

void VtkAssignCoordinatesLayoutStrategyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAssignCoordinatesLayoutStrategyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkGraphLayoutStrategyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkGraphLayoutStrategyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAssignCoordinatesLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetXCoordArrayName", GetXCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "getXCoordArrayName", GetXCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "GetYCoordArrayName", GetYCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "getYCoordArrayName", GetYCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "GetZCoordArrayName", GetZCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "getZCoordArrayName", GetZCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetXCoordArrayName", SetXCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "setXCoordArrayName", SetXCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "SetYCoordArrayName", SetYCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "setYCoordArrayName", SetYCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "SetZCoordArrayName", SetZCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "setZCoordArrayName", SetZCoordArrayName);

#ifdef VTK_NODE_PLUS_VTKASSIGNCOORDINATESLAYOUTSTRATEGYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKASSIGNCOORDINATESLAYOUTSTRATEGYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAssignCoordinatesLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAssignCoordinatesLayoutStrategy> native = vtkSmartPointer<vtkAssignCoordinatesLayoutStrategy>::New();
		VtkAssignCoordinatesLayoutStrategyWrap* obj = new VtkAssignCoordinatesLayoutStrategyWrap(native);
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

void VtkAssignCoordinatesLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesLayoutStrategyWrap::GetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXCoordArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesLayoutStrategyWrap::GetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYCoordArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesLayoutStrategyWrap::GetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZCoordArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
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

void VtkAssignCoordinatesLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Layout();
}

void VtkAssignCoordinatesLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	vtkAssignCoordinatesLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAssignCoordinatesLayoutStrategyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAssignCoordinatesLayoutStrategyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssignCoordinatesLayoutStrategyWrap *w = new VtkAssignCoordinatesLayoutStrategyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssignCoordinatesLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAssignCoordinatesLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkAssignCoordinatesLayoutStrategyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAssignCoordinatesLayoutStrategyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAssignCoordinatesLayoutStrategyWrap *w = new VtkAssignCoordinatesLayoutStrategyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssignCoordinatesLayoutStrategyWrap::SetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXCoordArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssignCoordinatesLayoutStrategyWrap::SetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYCoordArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssignCoordinatesLayoutStrategyWrap::SetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesLayoutStrategyWrap>(info.Holder());
	vtkAssignCoordinatesLayoutStrategy *native = (vtkAssignCoordinatesLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZCoordArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

