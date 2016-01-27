/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkCellWrap.h"
#include "vtkPointsWrap.h"
#include "vtkIdListWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellWrap::ptpl;

VtkCellWrap::VtkCellWrap()
{ }

VtkCellWrap::VtkCellWrap(vtkSmartPointer<vtkCell> _native)
{ native = _native; }

VtkCellWrap::~VtkCellWrap()
{ }

void VtkCellWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCell").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Cell").ToLocalChecked(), ConstructorGetter);
}

void VtkCellWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetCellDimension", GetCellDimension);
	Nan::SetPrototypeMethod(tpl, "getCellDimension", GetCellDimension);

	Nan::SetPrototypeMethod(tpl, "GetCellType", GetCellType);
	Nan::SetPrototypeMethod(tpl, "getCellType", GetCellType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEdge", GetEdge);
	Nan::SetPrototypeMethod(tpl, "getEdge", GetEdge);

	Nan::SetPrototypeMethod(tpl, "GetFace", GetFace);
	Nan::SetPrototypeMethod(tpl, "getFace", GetFace);

	Nan::SetPrototypeMethod(tpl, "GetLength2", GetLength2);
	Nan::SetPrototypeMethod(tpl, "getLength2", GetLength2);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEdges", GetNumberOfEdges);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEdges", GetNumberOfEdges);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFaces", GetNumberOfFaces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFaces", GetNumberOfFaces);

	Nan::SetPrototypeMethod(tpl, "GetPointIds", GetPointIds);
	Nan::SetPrototypeMethod(tpl, "getPointIds", GetPointIds);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsExplicitCell", IsExplicitCell);
	Nan::SetPrototypeMethod(tpl, "isExplicitCell", IsExplicitCell);

	Nan::SetPrototypeMethod(tpl, "IsLinear", IsLinear);
	Nan::SetPrototypeMethod(tpl, "isLinear", IsLinear);

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

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Triangulate", Triangulate);
	Nan::SetPrototypeMethod(tpl, "triangulate", Triangulate);

	ptpl.Reset( tpl );
}

void VtkCellWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkCellWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCellWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCellWrap *a0 = ObjectWrap::Unwrap<VtkCellWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkCell *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellWrap::GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellWrap::GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
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

void VtkCellWrap::GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
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

void VtkCellWrap::GetLength2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::GetPointIds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	vtkIdList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointIds();
		VtkIdListWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListWrap *w = new VtkIdListWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPoints();
		VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkCellWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
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

void VtkCellWrap::IsExplicitCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsExplicitCell();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::IsLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLinear();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::IsPrimaryCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsPrimaryCell();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	vtkCell * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
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
}

void VtkCellWrap::RequiresExplicitFaceRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RequiresExplicitFaceRepresentation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::RequiresInitialization(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RequiresInitialization();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCell * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
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

void VtkCellWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCellWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCellWrap *a0 = ObjectWrap::Unwrap<VtkCellWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkCell *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellWrap::Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellWrap *wrapper = ObjectWrap::Unwrap<VtkCellWrap>(info.Holder());
	vtkCell *native = (vtkCell *)wrapper->native.GetPointer();
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

