/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCell3DWrap.h"
#include "vtkPolyhedronWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCellWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPointsWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyhedronWrap::ptpl;

VtkPolyhedronWrap::VtkPolyhedronWrap()
{ }

VtkPolyhedronWrap::VtkPolyhedronWrap(vtkSmartPointer<vtkPolyhedron> _native)
{ native = _native; }

VtkPolyhedronWrap::~VtkPolyhedronWrap()
{ }

void VtkPolyhedronWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyhedron").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Polyhedron").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyhedronWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyhedronWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCell3DWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCell3DWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyhedronWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCellType", GetCellType);
	Nan::SetPrototypeMethod(tpl, "getCellType", GetCellType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdge", GetEdge);
	Nan::SetPrototypeMethod(tpl, "getEdge", GetEdge);

	Nan::SetPrototypeMethod(tpl, "GetFace", GetFace);
	Nan::SetPrototypeMethod(tpl, "getFace", GetFace);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEdges", GetNumberOfEdges);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEdges", GetNumberOfEdges);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFaces", GetNumberOfFaces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFaces", GetNumberOfFaces);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsPrimaryCell", IsPrimaryCell);
	Nan::SetPrototypeMethod(tpl, "isPrimaryCell", IsPrimaryCell);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RequiresExplicitFaceRepresentation", RequiresExplicitFaceRepresentation);
	Nan::SetPrototypeMethod(tpl, "requiresExplicitFaceRepresentation", RequiresExplicitFaceRepresentation);

	Nan::SetPrototypeMethod(tpl, "RequiresInitialization", RequiresInitialization);
	Nan::SetPrototypeMethod(tpl, "requiresInitialization", RequiresInitialization);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Triangulate", Triangulate);
	Nan::SetPrototypeMethod(tpl, "triangulate", Triangulate);

	ptpl.Reset( tpl );
}

void VtkPolyhedronWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyhedron> native = vtkSmartPointer<vtkPolyhedron>::New();
		VtkPolyhedronWrap* obj = new VtkPolyhedronWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPolyhedronWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyhedronWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPolyhedronWrap::GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkCell * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetEdge(
			info[0]->Int32Value()
		);
			VtkCellWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellWrap *w = new VtkCellWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyhedronWrap::GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkCell * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetFace(
			info[0]->Int32Value()
		);
			VtkCellWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellWrap *w = new VtkCellWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyhedronWrap::GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyhedronWrap::GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyhedronWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyData();
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

void VtkPolyhedronWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkPolyhedronWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
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

void VtkPolyhedronWrap::IsPrimaryCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsPrimaryCell();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyhedronWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	vtkPolyhedron * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPolyhedronWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyhedronWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyhedronWrap *w = new VtkPolyhedronWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyhedronWrap::RequiresExplicitFaceRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RequiresExplicitFaceRepresentation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyhedronWrap::RequiresInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RequiresInitialization();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyhedronWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPolyhedron * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPolyhedronWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyhedronWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyhedronWrap *w = new VtkPolyhedronWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyhedronWrap::Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyhedronWrap *wrapper = ObjectWrap::Unwrap<VtkPolyhedronWrap>(info.Holder());
	vtkPolyhedron *native = (vtkPolyhedron *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdListWrap *a1 = ObjectWrap::Unwrap<VtkIdListWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->Triangulate(
					info[0]->Int32Value(),
					(vtkIdList *) a1->native.GetPointer(),
					(vtkPoints *) a2->native.GetPointer()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

