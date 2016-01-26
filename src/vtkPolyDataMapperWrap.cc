/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkMapperWrap.h"
#include "vtkPolyDataMapperWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkActorWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkAbstractMapperWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataMapperWrap::ptpl;

VtkPolyDataMapperWrap::VtkPolyDataMapperWrap()
{ }

VtkPolyDataMapperWrap::VtkPolyDataMapperWrap(vtkSmartPointer<vtkPolyDataMapper> _native)
{ native = _native; }

VtkPolyDataMapperWrap::~VtkPolyDataMapperWrap()
{ }

void VtkPolyDataMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGhostLevel", GetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "getGhostLevel", GetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPieces", GetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPieces", GetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfSubPieces", GetNumberOfSubPieces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfSubPieces", GetNumberOfSubPieces);

	Nan::SetPrototypeMethod(tpl, "GetPiece", GetPiece);
	Nan::SetPrototypeMethod(tpl, "getPiece", GetPiece);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MapDataArrayToMultiTextureAttribute", MapDataArrayToMultiTextureAttribute);
	Nan::SetPrototypeMethod(tpl, "mapDataArrayToMultiTextureAttribute", MapDataArrayToMultiTextureAttribute);

	Nan::SetPrototypeMethod(tpl, "MapDataArrayToVertexAttribute", MapDataArrayToVertexAttribute);
	Nan::SetPrototypeMethod(tpl, "mapDataArrayToVertexAttribute", MapDataArrayToVertexAttribute);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllVertexAttributeMappings", RemoveAllVertexAttributeMappings);
	Nan::SetPrototypeMethod(tpl, "removeAllVertexAttributeMappings", RemoveAllVertexAttributeMappings);

	Nan::SetPrototypeMethod(tpl, "RemoveVertexAttributeMapping", RemoveVertexAttributeMapping);
	Nan::SetPrototypeMethod(tpl, "removeVertexAttributeMapping", RemoveVertexAttributeMapping);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "RenderPiece", RenderPiece);
	Nan::SetPrototypeMethod(tpl, "renderPiece", RenderPiece);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGhostLevel", SetGhostLevel);
	Nan::SetPrototypeMethod(tpl, "setGhostLevel", SetGhostLevel);

	Nan::SetPrototypeMethod(tpl, "SetInputData", SetInputData);
	Nan::SetPrototypeMethod(tpl, "setInputData", SetInputData);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPieces", SetNumberOfPieces);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPieces", SetNumberOfPieces);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfSubPieces", SetNumberOfSubPieces);
	Nan::SetPrototypeMethod(tpl, "setNumberOfSubPieces", SetNumberOfSubPieces);

	Nan::SetPrototypeMethod(tpl, "SetPiece", SetPiece);
	Nan::SetPrototypeMethod(tpl, "setPiece", SetPiece);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	ptpl.Reset( tpl );
}

void VtkPolyDataMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataMapper> native = vtkSmartPointer<vtkPolyDataMapper>::New();
		VtkPolyDataMapperWrap* obj = new VtkPolyDataMapperWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolyDataMapperWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyDataMapperWrap::GetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGhostLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapperWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
		VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataMapperWrap::GetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapperWrap::GetNumberOfSubPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfSubPieces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapperWrap::GetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataMapperWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
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

void VtkPolyDataMapperWrap::MapDataArrayToMultiTextureAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
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

void VtkPolyDataMapperWrap::MapDataArrayToVertexAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
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

void VtkPolyDataMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	vtkPolyDataMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolyDataMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataMapperWrap *w = new VtkPolyDataMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataMapperWrap::RemoveAllVertexAttributeMappings(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllVertexAttributeMappings();
}

void VtkPolyDataMapperWrap::RemoveVertexAttributeMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkPolyDataMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
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
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkActor *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::RenderPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
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

void VtkPolyDataMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolyDataMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolyDataMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataMapperWrap *w = new VtkPolyDataMapperWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::SetGhostLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGhostLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::SetInputData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputData(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::SetNumberOfPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPieces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::SetNumberOfSubPieces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfSubPieces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::SetPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPiece(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractMapperWrap *a0 = ObjectWrap::Unwrap<VtkAbstractMapperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkAbstractMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataMapperWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataMapperWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataMapperWrap>(info.Holder());
	vtkPolyDataMapper *native = (vtkPolyDataMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Update(
			info[0]->Int32Value()
		);
		return;
	}
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

