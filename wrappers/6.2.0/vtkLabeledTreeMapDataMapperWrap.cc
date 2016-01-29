/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkLabeledDataMapperWrap.h"
#include "vtkLabeledTreeMapDataMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkTreeWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLabeledTreeMapDataMapperWrap::ptpl;

VtkLabeledTreeMapDataMapperWrap::VtkLabeledTreeMapDataMapperWrap()
{ }

VtkLabeledTreeMapDataMapperWrap::VtkLabeledTreeMapDataMapperWrap(vtkSmartPointer<vtkLabeledTreeMapDataMapper> _native)
{ native = _native; }

VtkLabeledTreeMapDataMapperWrap::~VtkLabeledTreeMapDataMapperWrap()
{ }

void VtkLabeledTreeMapDataMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLabeledTreeMapDataMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LabeledTreeMapDataMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkLabeledTreeMapDataMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLabeledTreeMapDataMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkLabeledDataMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkLabeledDataMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLabeledTreeMapDataMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetChildMotion", GetChildMotion);
	Nan::SetPrototypeMethod(tpl, "getChildMotion", GetChildMotion);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipTextMode", GetClipTextMode);
	Nan::SetPrototypeMethod(tpl, "getClipTextMode", GetClipTextMode);

	Nan::SetPrototypeMethod(tpl, "GetDynamicLevel", GetDynamicLevel);
	Nan::SetPrototypeMethod(tpl, "getDynamicLevel", GetDynamicLevel);

	Nan::SetPrototypeMethod(tpl, "GetInputTree", GetInputTree);
	Nan::SetPrototypeMethod(tpl, "getInputTree", GetInputTree);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetChildMotion", SetChildMotion);
	Nan::SetPrototypeMethod(tpl, "setChildMotion", SetChildMotion);

	Nan::SetPrototypeMethod(tpl, "SetClipTextMode", SetClipTextMode);
	Nan::SetPrototypeMethod(tpl, "setClipTextMode", SetClipTextMode);

	Nan::SetPrototypeMethod(tpl, "SetDynamicLevel", SetDynamicLevel);
	Nan::SetPrototypeMethod(tpl, "setDynamicLevel", SetDynamicLevel);

	Nan::SetPrototypeMethod(tpl, "SetFontSizeRange", SetFontSizeRange);
	Nan::SetPrototypeMethod(tpl, "setFontSizeRange", SetFontSizeRange);

	Nan::SetPrototypeMethod(tpl, "SetLevelRange", SetLevelRange);
	Nan::SetPrototypeMethod(tpl, "setLevelRange", SetLevelRange);

	Nan::SetPrototypeMethod(tpl, "SetRectanglesArrayName", SetRectanglesArrayName);
	Nan::SetPrototypeMethod(tpl, "setRectanglesArrayName", SetRectanglesArrayName);

	ptpl.Reset( tpl );
}

void VtkLabeledTreeMapDataMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLabeledTreeMapDataMapper> native = vtkSmartPointer<vtkLabeledTreeMapDataMapper>::New();
		VtkLabeledTreeMapDataMapperWrap* obj = new VtkLabeledTreeMapDataMapperWrap(native);
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

void VtkLabeledTreeMapDataMapperWrap::GetChildMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetChildMotion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledTreeMapDataMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLabeledTreeMapDataMapperWrap::GetClipTextMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipTextMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledTreeMapDataMapperWrap::GetDynamicLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDynamicLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLabeledTreeMapDataMapperWrap::GetInputTree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	vtkTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputTree();
		VtkTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeWrap *w = new VtkTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledTreeMapDataMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
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

void VtkLabeledTreeMapDataMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	vtkLabeledTreeMapDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLabeledTreeMapDataMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLabeledTreeMapDataMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLabeledTreeMapDataMapperWrap *w = new VtkLabeledTreeMapDataMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLabeledTreeMapDataMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkWindowWrap::ptpl))->HasInstance(info[0]))
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActor2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActor2DWrap *a1 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RenderOpaqueGeometry(
				(vtkViewport *) a0->native.GetPointer(),
				(vtkActor2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActor2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActor2DWrap *a1 = ObjectWrap::Unwrap<VtkActor2DWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RenderOverlay(
				(vtkViewport *) a0->native.GetPointer(),
				(vtkActor2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLabeledTreeMapDataMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLabeledTreeMapDataMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLabeledTreeMapDataMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLabeledTreeMapDataMapperWrap *w = new VtkLabeledTreeMapDataMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::SetChildMotion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetChildMotion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::SetClipTextMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipTextMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::SetDynamicLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDynamicLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::SetFontSizeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetFontSizeRange(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::SetLevelRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLevelRange(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLabeledTreeMapDataMapperWrap::SetRectanglesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLabeledTreeMapDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkLabeledTreeMapDataMapperWrap>(info.Holder());
	vtkLabeledTreeMapDataMapper *native = (vtkLabeledTreeMapDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRectanglesArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

