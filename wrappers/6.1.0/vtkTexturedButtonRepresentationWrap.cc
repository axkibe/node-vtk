/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkButtonRepresentationWrap.h"
#include "vtkTexturedButtonRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkPropertyWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkPropWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkWindowWrap.h"
#include "vtkViewportWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTexturedButtonRepresentationWrap::ptpl;

VtkTexturedButtonRepresentationWrap::VtkTexturedButtonRepresentationWrap()
{ }

VtkTexturedButtonRepresentationWrap::VtkTexturedButtonRepresentationWrap(vtkSmartPointer<vtkTexturedButtonRepresentation> _native)
{ native = _native; }

VtkTexturedButtonRepresentationWrap::~VtkTexturedButtonRepresentationWrap()
{ }

void VtkTexturedButtonRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTexturedButtonRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TexturedButtonRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkTexturedButtonRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTexturedButtonRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkButtonRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkButtonRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTexturedButtonRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "ComputeInteractionState", ComputeInteractionState);
	Nan::SetPrototypeMethod(tpl, "computeInteractionState", ComputeInteractionState);

	Nan::SetPrototypeMethod(tpl, "FollowCameraOff", FollowCameraOff);
	Nan::SetPrototypeMethod(tpl, "followCameraOff", FollowCameraOff);

	Nan::SetPrototypeMethod(tpl, "FollowCameraOn", FollowCameraOn);
	Nan::SetPrototypeMethod(tpl, "followCameraOn", FollowCameraOn);

	Nan::SetPrototypeMethod(tpl, "GetActors", GetActors);
	Nan::SetPrototypeMethod(tpl, "getActors", GetActors);

	Nan::SetPrototypeMethod(tpl, "GetButtonGeometry", GetButtonGeometry);
	Nan::SetPrototypeMethod(tpl, "getButtonGeometry", GetButtonGeometry);

	Nan::SetPrototypeMethod(tpl, "GetButtonTexture", GetButtonTexture);
	Nan::SetPrototypeMethod(tpl, "getButtonTexture", GetButtonTexture);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFollowCamera", GetFollowCamera);
	Nan::SetPrototypeMethod(tpl, "getFollowCamera", GetFollowCamera);

	Nan::SetPrototypeMethod(tpl, "GetHoveringProperty", GetHoveringProperty);
	Nan::SetPrototypeMethod(tpl, "getHoveringProperty", GetHoveringProperty);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetSelectingProperty", GetSelectingProperty);
	Nan::SetPrototypeMethod(tpl, "getSelectingProperty", GetSelectingProperty);

	Nan::SetPrototypeMethod(tpl, "HasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "hasTranslucentPolygonalGeometry", HasTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "Highlight", Highlight);
	Nan::SetPrototypeMethod(tpl, "highlight", Highlight);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderOpaqueGeometry", RenderOpaqueGeometry);
	Nan::SetPrototypeMethod(tpl, "renderOpaqueGeometry", RenderOpaqueGeometry);

	Nan::SetPrototypeMethod(tpl, "RenderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);
	Nan::SetPrototypeMethod(tpl, "renderTranslucentPolygonalGeometry", RenderTranslucentPolygonalGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetButtonGeometry", SetButtonGeometry);
	Nan::SetPrototypeMethod(tpl, "setButtonGeometry", SetButtonGeometry);

	Nan::SetPrototypeMethod(tpl, "SetButtonGeometryConnection", SetButtonGeometryConnection);
	Nan::SetPrototypeMethod(tpl, "setButtonGeometryConnection", SetButtonGeometryConnection);

	Nan::SetPrototypeMethod(tpl, "SetButtonTexture", SetButtonTexture);
	Nan::SetPrototypeMethod(tpl, "setButtonTexture", SetButtonTexture);

	Nan::SetPrototypeMethod(tpl, "SetFollowCamera", SetFollowCamera);
	Nan::SetPrototypeMethod(tpl, "setFollowCamera", SetFollowCamera);

	Nan::SetPrototypeMethod(tpl, "SetHoveringProperty", SetHoveringProperty);
	Nan::SetPrototypeMethod(tpl, "setHoveringProperty", SetHoveringProperty);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "SetSelectingProperty", SetSelectingProperty);
	Nan::SetPrototypeMethod(tpl, "setSelectingProperty", SetSelectingProperty);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkTexturedButtonRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTexturedButtonRepresentation> native = vtkSmartPointer<vtkTexturedButtonRepresentation>::New();
		VtkTexturedButtonRepresentationWrap* obj = new VtkTexturedButtonRepresentationWrap(native);
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

void VtkTexturedButtonRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkTexturedButtonRepresentationWrap::ComputeInteractionState(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ComputeInteractionState(
					info[0]->Int32Value(),
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

void VtkTexturedButtonRepresentationWrap::FollowCameraOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FollowCameraOff();
}

void VtkTexturedButtonRepresentationWrap::FollowCameraOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FollowCameraOn();
}

void VtkTexturedButtonRepresentationWrap::GetActors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetActors(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::GetButtonGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetButtonGeometry();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTexturedButtonRepresentationWrap::GetButtonTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkImageData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetButtonTexture(
			info[0]->Int32Value()
		);
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
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTexturedButtonRepresentationWrap::GetFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFollowCamera();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTexturedButtonRepresentationWrap::GetHoveringProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoveringProperty();
		VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTexturedButtonRepresentationWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
		VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTexturedButtonRepresentationWrap::GetSelectingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	vtkProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectingProperty();
		VtkPropertyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPropertyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPropertyWrap *w = new VtkPropertyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTexturedButtonRepresentationWrap::HasTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasTranslucentPolygonalGeometry();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTexturedButtonRepresentationWrap::Highlight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Highlight(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	vtkTexturedButtonRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTexturedButtonRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTexturedButtonRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTexturedButtonRepresentationWrap *w = new VtkTexturedButtonRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTexturedButtonRepresentationWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PlaceWidget(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsArray())
			{
				v8::Local<v8::Array>a2( v8::Local<v8::Array>::Cast( info[2]->ToObject() ) );
				double b2[3];
				if( a2->Length() < 3 )
				{
					Nan::ThrowError("Array too short.");
					return;
				}

				for( i = 0; i < 3; i++ )
				{
					if( !a2->Get(i)->IsNumber() )
					{
						Nan::ThrowError("Array contents invalid.");
						return;
					}
					b2[i] = a2->Get(i)->NumberValue();
				}
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->PlaceWidget(
					info[0]->NumberValue(),
					b1,
					b2
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentationWrap::RenderOpaqueGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentationWrap::RenderTranslucentPolygonalGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
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

void VtkTexturedButtonRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTexturedButtonRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTexturedButtonRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTexturedButtonRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTexturedButtonRepresentationWrap *w = new VtkTexturedButtonRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::SetButtonGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetButtonGeometry(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::SetButtonGeometryConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetButtonGeometryConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::SetButtonTexture(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImageDataWrap *a1 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetButtonTexture(
				info[0]->Int32Value(),
				(vtkImageData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::SetFollowCamera(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFollowCamera(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::SetHoveringProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHoveringProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::SetSelectingProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPropertyWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPropertyWrap *a0 = ObjectWrap::Unwrap<VtkPropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectingProperty(
			(vtkProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTexturedButtonRepresentationWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTexturedButtonRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkTexturedButtonRepresentationWrap>(info.Holder());
	vtkTexturedButtonRepresentation *native = (vtkTexturedButtonRepresentation *)wrapper->native.GetPointer();
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

