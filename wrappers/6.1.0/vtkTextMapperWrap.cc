/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapper2DWrap.h"
#include "vtkTextMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkViewportWrap.h"
#include "vtkTextPropertyWrap.h"
#include "vtkActor2DWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTextMapperWrap::ptpl;

VtkTextMapperWrap::VtkTextMapperWrap()
{ }

VtkTextMapperWrap::VtkTextMapperWrap(vtkSmartPointer<vtkTextMapper> _native)
{ native = _native; }

VtkTextMapperWrap::~VtkTextMapperWrap()
{ }

void VtkTextMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTextMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TextMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkTextMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTextMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapper2DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapper2DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTextMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetHeight", GetHeight);
	Nan::SetPrototypeMethod(tpl, "getHeight", GetHeight);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLines", GetNumberOfLines);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLines", GetNumberOfLines);

	Nan::SetPrototypeMethod(tpl, "GetSystemFontSize", GetSystemFontSize);
	Nan::SetPrototypeMethod(tpl, "getSystemFontSize", GetSystemFontSize);

	Nan::SetPrototypeMethod(tpl, "GetTextProperty", GetTextProperty);
	Nan::SetPrototypeMethod(tpl, "getTextProperty", GetTextProperty);

	Nan::SetPrototypeMethod(tpl, "GetWidth", GetWidth);
	Nan::SetPrototypeMethod(tpl, "getWidth", GetWidth);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOverlay", RenderOverlay);
	Nan::SetPrototypeMethod(tpl, "renderOverlay", RenderOverlay);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetConstrainedFontSize", SetConstrainedFontSize);
	Nan::SetPrototypeMethod(tpl, "setConstrainedFontSize", SetConstrainedFontSize);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	Nan::SetPrototypeMethod(tpl, "SetTextProperty", SetTextProperty);
	Nan::SetPrototypeMethod(tpl, "setTextProperty", SetTextProperty);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkTextMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTextMapper> native = vtkSmartPointer<vtkTextMapper>::New();
		VtkTextMapperWrap* obj = new VtkTextMapperWrap(native);
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

void VtkTextMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextMapperWrap::GetHeight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetHeight(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextMapperWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTextMapperWrap::GetNumberOfLines(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfLines(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLines();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTextMapperWrap::GetSystemFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetSystemFontSize(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextMapperWrap::GetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
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

void VtkTextMapperWrap::GetWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkViewportWrap::ptpl))->HasInstance(info[0]))
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetWidth(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
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

void VtkTextMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	vtkTextMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTextMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTextMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTextMapperWrap *w = new VtkTextMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTextMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
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

void VtkTextMapperWrap::RenderOverlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
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

void VtkTextMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTextMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTextMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTextMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTextMapperWrap *w = new VtkTextMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTextMapperWrap::SetConstrainedFontSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextMapperWrap *a0 = ObjectWrap::Unwrap<VtkTextMapperWrap>(info[0]->ToObject());
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
						(vtkTextMapper *) a0->native.GetPointer(),
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

void VtkTextMapperWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
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

void VtkTextMapperWrap::SetTextProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
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

void VtkTextMapperWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTextMapperWrap *wrapper = ObjectWrap::Unwrap<VtkTextMapperWrap>(info.Holder());
	vtkTextMapper *native = (vtkTextMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkTextMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkTextMapperWrap *a0 = ObjectWrap::Unwrap<VtkTextMapperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkTextMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

