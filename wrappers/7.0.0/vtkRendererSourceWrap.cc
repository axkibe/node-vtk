/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAlgorithmWrap.h"
#include "vtkRendererSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkImageDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRendererSourceWrap::ptpl;

VtkRendererSourceWrap::VtkRendererSourceWrap()
{ }

VtkRendererSourceWrap::VtkRendererSourceWrap(vtkSmartPointer<vtkRendererSource> _native)
{ native = _native; }

VtkRendererSourceWrap::~VtkRendererSourceWrap()
{ }

void VtkRendererSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRendererSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RendererSource").ToLocalChecked(), ConstructorGetter);
}

void VtkRendererSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRendererSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRendererSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DepthValuesInScalarsOff", DepthValuesInScalarsOff);
	Nan::SetPrototypeMethod(tpl, "depthValuesInScalarsOff", DepthValuesInScalarsOff);

	Nan::SetPrototypeMethod(tpl, "DepthValuesInScalarsOn", DepthValuesInScalarsOn);
	Nan::SetPrototypeMethod(tpl, "depthValuesInScalarsOn", DepthValuesInScalarsOn);

	Nan::SetPrototypeMethod(tpl, "DepthValuesOff", DepthValuesOff);
	Nan::SetPrototypeMethod(tpl, "depthValuesOff", DepthValuesOff);

	Nan::SetPrototypeMethod(tpl, "DepthValuesOn", DepthValuesOn);
	Nan::SetPrototypeMethod(tpl, "depthValuesOn", DepthValuesOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDepthValues", GetDepthValues);
	Nan::SetPrototypeMethod(tpl, "getDepthValues", GetDepthValues);

	Nan::SetPrototypeMethod(tpl, "GetDepthValuesInScalars", GetDepthValuesInScalars);
	Nan::SetPrototypeMethod(tpl, "getDepthValuesInScalars", GetDepthValuesInScalars);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "GetRenderFlag", GetRenderFlag);
	Nan::SetPrototypeMethod(tpl, "getRenderFlag", GetRenderFlag);

	Nan::SetPrototypeMethod(tpl, "GetWholeWindow", GetWholeWindow);
	Nan::SetPrototypeMethod(tpl, "getWholeWindow", GetWholeWindow);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RenderFlagOff", RenderFlagOff);
	Nan::SetPrototypeMethod(tpl, "renderFlagOff", RenderFlagOff);

	Nan::SetPrototypeMethod(tpl, "RenderFlagOn", RenderFlagOn);
	Nan::SetPrototypeMethod(tpl, "renderFlagOn", RenderFlagOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDepthValues", SetDepthValues);
	Nan::SetPrototypeMethod(tpl, "setDepthValues", SetDepthValues);

	Nan::SetPrototypeMethod(tpl, "SetDepthValuesInScalars", SetDepthValuesInScalars);
	Nan::SetPrototypeMethod(tpl, "setDepthValuesInScalars", SetDepthValuesInScalars);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetRenderFlag", SetRenderFlag);
	Nan::SetPrototypeMethod(tpl, "setRenderFlag", SetRenderFlag);

	Nan::SetPrototypeMethod(tpl, "SetWholeWindow", SetWholeWindow);
	Nan::SetPrototypeMethod(tpl, "setWholeWindow", SetWholeWindow);

	Nan::SetPrototypeMethod(tpl, "WholeWindowOff", WholeWindowOff);
	Nan::SetPrototypeMethod(tpl, "wholeWindowOff", WholeWindowOff);

	Nan::SetPrototypeMethod(tpl, "WholeWindowOn", WholeWindowOn);
	Nan::SetPrototypeMethod(tpl, "wholeWindowOn", WholeWindowOn);

#ifdef VTK_NODE_PLUS_VTKRENDERERSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRENDERERSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkRendererSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRendererSource> native = vtkSmartPointer<vtkRendererSource>::New();
		VtkRendererSourceWrap* obj = new VtkRendererSourceWrap(native);
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

void VtkRendererSourceWrap::DepthValuesInScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DepthValuesInScalarsOff();
}

void VtkRendererSourceWrap::DepthValuesInScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DepthValuesInScalarsOn();
}

void VtkRendererSourceWrap::DepthValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DepthValuesOff();
}

void VtkRendererSourceWrap::DepthValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DepthValuesOn();
}

void VtkRendererSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRendererSourceWrap::GetDepthValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthValues();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRendererSourceWrap::GetDepthValuesInScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDepthValuesInScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRendererSourceWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRendererSourceWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRendererSourceWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRendererSourceWrap::GetRenderFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRendererSourceWrap::GetWholeWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeWindow();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRendererSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
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

void VtkRendererSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	vtkRendererSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkRendererSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererSourceWrap *w = new VtkRendererSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRendererSourceWrap::RenderFlagOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderFlagOff();
}

void VtkRendererSourceWrap::RenderFlagOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RenderFlagOn();
}

void VtkRendererSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRendererSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkRendererSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRendererSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRendererSourceWrap *w = new VtkRendererSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererSourceWrap::SetDepthValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthValues(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererSourceWrap::SetDepthValuesInScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDepthValuesInScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererSourceWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererSourceWrap::SetRenderFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderFlag(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererSourceWrap::SetWholeWindow(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetWholeWindow(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRendererSourceWrap::WholeWindowOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WholeWindowOff();
}

void VtkRendererSourceWrap::WholeWindowOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRendererSourceWrap *wrapper = ObjectWrap::Unwrap<VtkRendererSourceWrap>(info.Holder());
	vtkRendererSource *native = (vtkRendererSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->WholeWindowOn();
}

