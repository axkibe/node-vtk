/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkActor2DWrap.h"
#include "vtkTextActorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPropWrap.h"
#include "vtkPolyDataMapper2DWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextActorWrap::ptpl;

VtkTextActorWrap::VtkTextActorWrap()
{ }

VtkTextActorWrap::VtkTextActorWrap(vtkSmartPointer<vtkTextActor> _native)
{ native = _native; }

VtkTextActorWrap::~VtkTextActorWrap()
{ }

void VtkTextActorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextActor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextActor").ToLocalChecked(), ConstructorGetter);
}

void VtkTextActorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextActorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkActor2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkActor2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextActorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeScaledFont", ComputeScaledFont);
	Nan::SetPrototypeMethod(tpl, "computeScaledFont", ComputeScaledFont);

	Nan::SetPrototypeMethod(tpl, "GetAlignmentPoint", GetAlignmentPoint);
	Nan::SetPrototypeMethod(tpl, "getAlignmentPoint", GetAlignmentPoint);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetScaledTextProperty", GetScaledTextProperty);
	Nan::SetPrototypeMethod(tpl, "getScaledTextProperty", GetScaledTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetTextProperty", GetTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTextProperty", GetTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetTextScaleMode", GetTextScaleMode);
	Nan::SetPrototypeMethod(tpl, "getTextScaleMode", GetTextScaleMode);

	Nan::SetPrototypeMethod(tpl, "GetTextScaleModeMaxValue", GetTextScaleModeMaxValue);
	Nan::SetPrototypeMethod(tpl, "getTextScaleModeMaxValue", GetTextScaleModeMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetTextScaleModeMinValue", GetTextScaleModeMinValue);
	Nan::SetPrototypeMethod(tpl, "getTextScaleModeMinValue", GetTextScaleModeMinValue);

	Nan::SetPrototypeMethod(tpl, "GetUseBorderAlign", GetUseBorderAlign);
	Nan::SetPrototypeMethod(tpl, "getUseBorderAlign", GetUseBorderAlign);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

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

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlignmentPoint", SetAlignmentPoint);
	Nan::SetPrototypeMethod(tpl, "setAlignmentPoint", SetAlignmentPoint);

	Nan::SetPrototypeMethod(tpl, "SetConstrainedFontSize", SetConstrainedFontSize);
	Nan::SetPrototypeMethod(tpl, "setConstrainedFontSize", SetConstrainedFontSize);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetMapper", SetMapper);
	Nan::SetPrototypeMethod(tpl, "setMapper", SetMapper);

	Nan::SetPrototypeMethod(tpl, "SetMinimumSize", SetMinimumSize);
	Nan::SetPrototypeMethod(tpl, "setMinimumSize", SetMinimumSize);

	Nan::SetPrototypeMethod(tpl, "SetNonLinearFontScale", SetNonLinearFontScale);
	Nan::SetPrototypeMethod(tpl, "setNonLinearFontScale", SetNonLinearFontScale);

	Nan::SetPrototypeMethod(tpl, "SetTextProperty", SetTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTextProperty", SetTextProperty);

	Nan::SetPrototypeMethod(tpl, "SetTextScaleMode", SetTextScaleMode);
	Nan::SetPrototypeMethod(tpl, "setTextScaleMode", SetTextScaleMode);

	Nan::SetPrototypeMethod(tpl, "SetTextScaleModeToNone", SetTextScaleModeToNone);
	Nan::SetPrototypeMethod(tpl, "setTextScaleModeToNone", SetTextScaleModeToNone);

	Nan::SetPrototypeMethod(tpl, "SetTextScaleModeToProp", SetTextScaleModeToProp);
	Nan::SetPrototypeMethod(tpl, "setTextScaleModeToProp", SetTextScaleModeToProp);

	Nan::SetPrototypeMethod(tpl, "SetTextScaleModeToViewport", SetTextScaleModeToViewport);
	Nan::SetPrototypeMethod(tpl, "setTextScaleModeToViewport", SetTextScaleModeToViewport);

	Nan::SetPrototypeMethod(tpl, "SetUseBorderAlign", SetUseBorderAlign);
	Nan::SetPrototypeMethod(tpl, "setUseBorderAlign", SetUseBorderAlign);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "UseBorderAlignOff", UseBorderAlignOff);
	Nan::SetPrototypeMethod(tpl, "useBorderAlignOff", UseBorderAlignOff);

	Nan::SetPrototypeMethod(tpl, "UseBorderAlignOn", UseBorderAlignOn);
	Nan::SetPrototypeMethod(tpl, "useBorderAlignOn", UseBorderAlignOn);

	ptpl.Reset( tpl );
}

void VtkTextActorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextActor> native = vtkSmartPointer<vtkTextActor>::New();
		VtkTextActorWrap* obj = new VtkTextActorWrap(native);
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

void VtkTextActorWrap::ComputeScaledFont(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ComputeScaledFont(
			(vtkViewport *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::GetAlignmentPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAlignmentPoint();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextActorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextActorWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextActorWrap::GetScaledTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScaledTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextActorWrap::GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	vtkTextProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextProperty();
		VtkTextPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextPropertyWrap *w = new VtkTextPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextActorWrap::GetTextScaleMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextScaleMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextActorWrap::GetTextScaleModeMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextScaleModeMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextActorWrap::GetTextScaleModeMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTextScaleModeMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextActorWrap::GetUseBorderAlign(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseBorderAlign();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextActorWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextActorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
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

void VtkTextActorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	vtkTextActor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextActorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextActorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextActorWrap *w = new VtkTextActorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextActorWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
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

void VtkTextActorWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOpaqueGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderOverlay(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderTranslucentPolygonalGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextActor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextActorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextActorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextActorWrap *w = new VtkTextActorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetAlignmentPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlignmentPoint(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetConstrainedFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextActorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextActorWrap *a0 = ObjectWrap::Unwrap<VtkTextActorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[1]))
		{
			VtkViewportWrap *a1 = ObjectWrap::Unwrap<VtkViewportWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->SetConstrainedFontSize(
						(vtkTextActor *) a0->native.GetPointer(),
						(vtkViewport *) a1->native.GetPointer(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->SetConstrainedFontSize(
					(vtkViewport *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataMapper2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataMapper2DWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataMapper2DWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMapper(
			(vtkPolyDataMapper2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetMinimumSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetMinimumSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetNonLinearFontScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetNonLinearFontScale(
				info[0]->NumberValue(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextPropertyWrap *a0 = ObjectWrap::Unwrap<VtkTextPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextProperty(
			(vtkTextProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetTextScaleMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTextScaleMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::SetTextScaleModeToNone(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTextScaleModeToNone();
}

void VtkTextActorWrap::SetTextScaleModeToProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTextScaleModeToProp();
}

void VtkTextActorWrap::SetTextScaleModeToViewport(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetTextScaleModeToViewport();
}

void VtkTextActorWrap::SetUseBorderAlign(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseBorderAlign(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextActorWrap::UseBorderAlignOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseBorderAlignOff();
}

void VtkTextActorWrap::UseBorderAlignOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextActorWrap *wrapper = ObjectWrap::Unwrap<VtkTextActorWrap>(info.Holder());
	vtkTextActor *native = (vtkTextActor *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseBorderAlignOn();
}

