/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInteractorStyleWrap.h"
#include "vtkInteractorStyleTerrainWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkInteractorStyleTerrainWrap::constructor;

VtkInteractorStyleTerrainWrap::VtkInteractorStyleTerrainWrap()
{ }

VtkInteractorStyleTerrainWrap::VtkInteractorStyleTerrainWrap(vtkSmartPointer<vtkInteractorStyleTerrain> _native)
{ native = _native; }

VtkInteractorStyleTerrainWrap::~VtkInteractorStyleTerrainWrap()
{ }

void VtkInteractorStyleTerrainWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkInteractorStyleTerrainWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkInteractorObserverWrap::InitTpl(tpl);
	VtkInteractorStyleWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkInteractorStyleTerrain").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("InteractorStyleTerrain").ToLocalChecked(),tpl->GetFunction());
}

void VtkInteractorStyleTerrainWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "Dolly", Dolly);
	Nan::SetPrototypeMethod(tpl, "dolly", Dolly);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLatLongLines", GetLatLongLines);
	Nan::SetPrototypeMethod(tpl, "getLatLongLines", GetLatLongLines);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LatLongLinesOff", LatLongLinesOff);
	Nan::SetPrototypeMethod(tpl, "latLongLinesOff", LatLongLinesOff);

	Nan::SetPrototypeMethod(tpl, "LatLongLinesOn", LatLongLinesOn);
	Nan::SetPrototypeMethod(tpl, "latLongLinesOn", LatLongLinesOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OnChar", OnChar);
	Nan::SetPrototypeMethod(tpl, "onChar", OnChar);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonDown", OnLeftButtonDown);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonDown", OnLeftButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnLeftButtonUp", OnLeftButtonUp);
	Nan::SetPrototypeMethod(tpl, "onLeftButtonUp", OnLeftButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonDown", OnMiddleButtonDown);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonDown", OnMiddleButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnMiddleButtonUp", OnMiddleButtonUp);
	Nan::SetPrototypeMethod(tpl, "onMiddleButtonUp", OnMiddleButtonUp);

	Nan::SetPrototypeMethod(tpl, "OnMouseMove", OnMouseMove);
	Nan::SetPrototypeMethod(tpl, "onMouseMove", OnMouseMove);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonDown", OnRightButtonDown);
	Nan::SetPrototypeMethod(tpl, "onRightButtonDown", OnRightButtonDown);

	Nan::SetPrototypeMethod(tpl, "OnRightButtonUp", OnRightButtonUp);
	Nan::SetPrototypeMethod(tpl, "onRightButtonUp", OnRightButtonUp);

	Nan::SetPrototypeMethod(tpl, "Pan", Pan);
	Nan::SetPrototypeMethod(tpl, "pan", Pan);

	Nan::SetPrototypeMethod(tpl, "Rotate", Rotate);
	Nan::SetPrototypeMethod(tpl, "rotate", Rotate);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLatLongLines", SetLatLongLines);
	Nan::SetPrototypeMethod(tpl, "setLatLongLines", SetLatLongLines);

}

void VtkInteractorStyleTerrainWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkInteractorStyleTerrain> native = vtkSmartPointer<vtkInteractorStyleTerrain>::New();
		VtkInteractorStyleTerrainWrap* obj = new VtkInteractorStyleTerrainWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInteractorStyleTerrainWrap::Dolly(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Dolly();
}

void VtkInteractorStyleTerrainWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInteractorStyleTerrainWrap::GetLatLongLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatLongLines();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkInteractorStyleTerrainWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
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

void VtkInteractorStyleTerrainWrap::LatLongLinesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LatLongLinesOff();
}

void VtkInteractorStyleTerrainWrap::LatLongLinesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LatLongLinesOn();
}

void VtkInteractorStyleTerrainWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	vtkInteractorStyleTerrain * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInteractorStyleTerrainWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInteractorStyleTerrainWrap *w = new VtkInteractorStyleTerrainWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInteractorStyleTerrainWrap::OnChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnChar();
}

void VtkInteractorStyleTerrainWrap::OnLeftButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonDown();
}

void VtkInteractorStyleTerrainWrap::OnLeftButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnLeftButtonUp();
}

void VtkInteractorStyleTerrainWrap::OnMiddleButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonDown();
}

void VtkInteractorStyleTerrainWrap::OnMiddleButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMiddleButtonUp();
}

void VtkInteractorStyleTerrainWrap::OnMouseMove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnMouseMove();
}

void VtkInteractorStyleTerrainWrap::OnRightButtonDown(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonDown();
}

void VtkInteractorStyleTerrainWrap::OnRightButtonUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OnRightButtonUp();
}

void VtkInteractorStyleTerrainWrap::Pan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Pan();
}

void VtkInteractorStyleTerrainWrap::Rotate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Rotate();
}

void VtkInteractorStyleTerrainWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInteractorStyleTerrain * r;
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
			Nan::New<v8::Function>(VtkInteractorStyleTerrainWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInteractorStyleTerrainWrap *w = new VtkInteractorStyleTerrainWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInteractorStyleTerrainWrap::SetLatLongLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInteractorStyleTerrainWrap *wrapper = ObjectWrap::Unwrap<VtkInteractorStyleTerrainWrap>(info.Holder());
	vtkInteractorStyleTerrain *native = (vtkInteractorStyleTerrain *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLatLongLines(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

