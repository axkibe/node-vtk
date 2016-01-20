/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include <vtkSmartPointer.h>
#include <vtkWindow.h>

#include "vtkObjectWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

Nan::Persistent<v8::Function> VtkWindowWrap::constructor;

VtkWindowWrap::VtkWindowWrap()
{ }

VtkWindowWrap::VtkWindowWrap(vtkSmartPointer<vtkWindow> _native)
{ native = _native; }

VtkWindowWrap::~VtkWindowWrap()
{ }

void VtkWindowWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkWindowWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkWindow").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("window").ToLocalChecked(),tpl->GetFunction());
}

void VtkWindowWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetWindowInfo", SetWindowInfo);
	Nan::SetPrototypeMethod(tpl, "setWindowInfo", SetWindowInfo);

	Nan::SetPrototypeMethod(tpl, "SetParentInfo", SetParentInfo);
	Nan::SetPrototypeMethod(tpl, "setParentInfo", SetParentInfo);

	Nan::SetPrototypeMethod(tpl, "SetPosition", SetPosition);
	Nan::SetPrototypeMethod(tpl, "setPosition", SetPosition);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "SetMapped", SetMapped);
	Nan::SetPrototypeMethod(tpl, "setMapped", SetMapped);

	Nan::SetPrototypeMethod(tpl, "GetMapped", GetMapped);
	Nan::SetPrototypeMethod(tpl, "getMapped", GetMapped);

	Nan::SetPrototypeMethod(tpl, "MappedOn", MappedOn);
	Nan::SetPrototypeMethod(tpl, "mappedOn", MappedOn);

	Nan::SetPrototypeMethod(tpl, "MappedOff", MappedOff);
	Nan::SetPrototypeMethod(tpl, "mappedOff", MappedOff);

	Nan::SetPrototypeMethod(tpl, "SetErase", SetErase);
	Nan::SetPrototypeMethod(tpl, "setErase", SetErase);

	Nan::SetPrototypeMethod(tpl, "GetErase", GetErase);
	Nan::SetPrototypeMethod(tpl, "getErase", GetErase);

	Nan::SetPrototypeMethod(tpl, "EraseOn", EraseOn);
	Nan::SetPrototypeMethod(tpl, "eraseOn", EraseOn);

	Nan::SetPrototypeMethod(tpl, "EraseOff", EraseOff);
	Nan::SetPrototypeMethod(tpl, "eraseOff", EraseOff);

	Nan::SetPrototypeMethod(tpl, "SetDoubleBuffer", SetDoubleBuffer);
	Nan::SetPrototypeMethod(tpl, "setDoubleBuffer", SetDoubleBuffer);

	Nan::SetPrototypeMethod(tpl, "GetDoubleBuffer", GetDoubleBuffer);
	Nan::SetPrototypeMethod(tpl, "getDoubleBuffer", GetDoubleBuffer);

	Nan::SetPrototypeMethod(tpl, "DoubleBufferOn", DoubleBufferOn);
	Nan::SetPrototypeMethod(tpl, "doubleBufferOn", DoubleBufferOn);

	Nan::SetPrototypeMethod(tpl, "DoubleBufferOff", DoubleBufferOff);
	Nan::SetPrototypeMethod(tpl, "doubleBufferOff", DoubleBufferOff);

	Nan::SetPrototypeMethod(tpl, "GetWindowName", GetWindowName);
	Nan::SetPrototypeMethod(tpl, "getWindowName", GetWindowName);

	Nan::SetPrototypeMethod(tpl, "SetWindowName", SetWindowName);
	Nan::SetPrototypeMethod(tpl, "setWindowName", SetWindowName);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "GetDPI", GetDPI);
	Nan::SetPrototypeMethod(tpl, "getDPI", GetDPI);

	Nan::SetPrototypeMethod(tpl, "SetDPI", SetDPI);
	Nan::SetPrototypeMethod(tpl, "setDPI", SetDPI);

	Nan::SetPrototypeMethod(tpl, "GetDPIMinValue", GetDPIMinValue);
	Nan::SetPrototypeMethod(tpl, "getDPIMinValue", GetDPIMinValue);

	Nan::SetPrototypeMethod(tpl, "GetDPIMaxValue", GetDPIMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDPIMaxValue", GetDPIMaxValue);

	Nan::SetPrototypeMethod(tpl, "SetOffScreenRendering", SetOffScreenRendering);
	Nan::SetPrototypeMethod(tpl, "setOffScreenRendering", SetOffScreenRendering);

	Nan::SetPrototypeMethod(tpl, "GetOffScreenRendering", GetOffScreenRendering);
	Nan::SetPrototypeMethod(tpl, "getOffScreenRendering", GetOffScreenRendering);

	Nan::SetPrototypeMethod(tpl, "OffScreenRenderingOn", OffScreenRenderingOn);
	Nan::SetPrototypeMethod(tpl, "offScreenRenderingOn", OffScreenRenderingOn);

	Nan::SetPrototypeMethod(tpl, "OffScreenRenderingOff", OffScreenRenderingOff);
	Nan::SetPrototypeMethod(tpl, "offScreenRenderingOff", OffScreenRenderingOff);

	Nan::SetPrototypeMethod(tpl, "MakeCurrent", MakeCurrent);
	Nan::SetPrototypeMethod(tpl, "makeCurrent", MakeCurrent);

	Nan::SetPrototypeMethod(tpl, "SetTileScale", SetTileScale);
	Nan::SetPrototypeMethod(tpl, "setTileScale", SetTileScale);

	Nan::SetPrototypeMethod(tpl, "SetTileScale", SetTileScale);
	Nan::SetPrototypeMethod(tpl, "setTileScale", SetTileScale);

	Nan::SetPrototypeMethod(tpl, "SetTileViewport", SetTileViewport);
	Nan::SetPrototypeMethod(tpl, "setTileViewport", SetTileViewport);

}

void VtkWindowWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(strcmp(*s, "__nowrap" ))
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkWindowWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWindowWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
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

void VtkWindowWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	vtkWindow * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	const int argc = 1;
	v8::Local<v8::Value> argv[argc] =
		{ Nan::New("__nowrap").ToLocalChecked() };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkWindowWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
	VtkWindowWrap *w = new VtkWindowWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindowWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkWindow * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		const int argc = 1;
		v8::Local<v8::Value> argv[argc] =
			{ Nan::New("__nowrap").ToLocalChecked() };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkWindowWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(argc, argv);
		VtkWindowWrap *w = new VtkWindowWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::SetWindowInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWindowInfo(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::SetParentInfo(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetParentInfo(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::SetPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPosition(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::SetMapped(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMapped(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::GetMapped(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapped();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowWrap::MappedOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MappedOn();
}

void VtkWindowWrap::MappedOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MappedOff();
}

void VtkWindowWrap::SetErase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetErase(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::GetErase(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetErase();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowWrap::EraseOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EraseOn();
}

void VtkWindowWrap::EraseOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EraseOff();
}

void VtkWindowWrap::SetDoubleBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDoubleBuffer(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::GetDoubleBuffer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDoubleBuffer();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowWrap::DoubleBufferOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DoubleBufferOn();
}

void VtkWindowWrap::DoubleBufferOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DoubleBufferOff();
}

void VtkWindowWrap::GetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWindowName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWindowWrap::SetWindowName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWindowName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Render();
}

void VtkWindowWrap::GetDPI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDPI();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowWrap::SetDPI(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDPI(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::GetDPIMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDPIMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowWrap::GetDPIMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDPIMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowWrap::SetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffScreenRendering(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::GetOffScreenRendering(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffScreenRendering();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindowWrap::OffScreenRenderingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OffScreenRenderingOn();
}

void VtkWindowWrap::OffScreenRenderingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->OffScreenRenderingOff();
}

void VtkWindowWrap::MakeCurrent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MakeCurrent();
}

void VtkWindowWrap::SetTileScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTileScale(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindowWrap::SetTileViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindowWrap *wrapper = ObjectWrap::Unwrap<VtkWindowWrap>(info.Holder());
	vtkWindow *native = (vtkWindow *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetTileViewport(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

