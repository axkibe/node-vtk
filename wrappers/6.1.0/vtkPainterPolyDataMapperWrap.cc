/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataMapperWrap.h"
#include "vtkPainterPolyDataMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkActorWrap.h"
#include "vtkPainterWrap.h"
#include "vtkWindowWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPainterPolyDataMapperWrap::ptpl;

VtkPainterPolyDataMapperWrap::VtkPainterPolyDataMapperWrap()
{ }

VtkPainterPolyDataMapperWrap::VtkPainterPolyDataMapperWrap(vtkSmartPointer<vtkPainterPolyDataMapper> _native)
{ native = _native; }

VtkPainterPolyDataMapperWrap::~VtkPainterPolyDataMapperWrap()
{ }

void VtkPainterPolyDataMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPainterPolyDataMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PainterPolyDataMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkPainterPolyDataMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPainterPolyDataMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPainterPolyDataMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPainter", GetPainter);
	Nan::SetPrototypeMethod(tpl, "getPainter", GetPainter);

	Nan::SetPrototypeMethod(tpl, "GetSelectionPainter", GetSelectionPainter);
	Nan::SetPrototypeMethod(tpl, "getSelectionPainter", GetSelectionPainter);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MapDataArrayToMultiTextureAttribute", MapDataArrayToMultiTextureAttribute);
	Nan::SetPrototypeMethod(tpl, "mapDataArrayToMultiTextureAttribute", MapDataArrayToMultiTextureAttribute);

	Nan::SetPrototypeMethod(tpl, "MapDataArrayToVertexAttribute", MapDataArrayToVertexAttribute);
	Nan::SetPrototypeMethod(tpl, "mapDataArrayToVertexAttribute", MapDataArrayToVertexAttribute);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RemoveAllVertexAttributeMappings", RemoveAllVertexAttributeMappings);
	Nan::SetPrototypeMethod(tpl, "removeAllVertexAttributeMappings", RemoveAllVertexAttributeMappings);

	Nan::SetPrototypeMethod(tpl, "RemoveVertexAttributeMapping", RemoveVertexAttributeMapping);
	Nan::SetPrototypeMethod(tpl, "removeVertexAttributeMapping", RemoveVertexAttributeMapping);

	Nan::SetPrototypeMethod(tpl, "RenderPiece", RenderPiece);
	Nan::SetPrototypeMethod(tpl, "renderPiece", RenderPiece);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPainter", SetPainter);
	Nan::SetPrototypeMethod(tpl, "setPainter", SetPainter);

	Nan::SetPrototypeMethod(tpl, "SetSelectionPainter", SetSelectionPainter);
	Nan::SetPrototypeMethod(tpl, "setSelectionPainter", SetSelectionPainter);

	ptpl.Reset( tpl );
}

void VtkPainterPolyDataMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPainterPolyDataMapper> native = vtkSmartPointer<vtkPainterPolyDataMapper>::New();
		VtkPainterPolyDataMapperWrap* obj = new VtkPainterPolyDataMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPainterPolyDataMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPainterPolyDataMapperWrap::GetPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	vtkPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPainter();
		VtkPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPainterWrap *w = new VtkPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterPolyDataMapperWrap::GetSelectionPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	vtkPainter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionPainter();
		VtkPainterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPainterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPainterWrap *w = new VtkPainterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterPolyDataMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
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

void VtkPainterPolyDataMapperWrap::MapDataArrayToMultiTextureAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->MapDataArrayToMultiTextureAttribute(
						info[0]->Int32Value(),
						*a1,
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterPolyDataMapperWrap::MapDataArrayToVertexAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->MapDataArrayToVertexAttribute(
						*a0,
						*a1,
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterPolyDataMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	vtkPainterPolyDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPainterPolyDataMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPainterPolyDataMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPainterPolyDataMapperWrap *w = new VtkPainterPolyDataMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPainterPolyDataMapperWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
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

void VtkPainterPolyDataMapperWrap::RemoveAllVertexAttributeMappings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllVertexAttributeMappings();
}

void VtkPainterPolyDataMapperWrap::RemoveVertexAttributeMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveVertexAttributeMapping(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterPolyDataMapperWrap::RenderPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActorWrap *a1 = ObjectWrap::Unwrap<VtkActorWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->RenderPiece(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkActor *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterPolyDataMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPainterPolyDataMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPainterPolyDataMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPainterPolyDataMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPainterPolyDataMapperWrap *w = new VtkPainterPolyDataMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterPolyDataMapperWrap::SetPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPainterWrap *a0 = ObjectWrap::Unwrap<VtkPainterWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPainter(
			(vtkPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPainterPolyDataMapperWrap::SetSelectionPainter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPainterPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPainterPolyDataMapperWrap>(info.Holder());
	vtkPainterPolyDataMapper *native = (vtkPainterPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPainterWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPainterWrap *a0 = ObjectWrap::Unwrap<VtkPainterWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionPainter(
			(vtkPainter *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
