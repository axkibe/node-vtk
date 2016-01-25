/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkNonLinearCellWrap.h"
#include "vtkQuadraticPolygonWrap.h"
#include "vtkObjectWrap.h"
#include "vtkCellWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkQuadraticPolygonWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkQuadraticPolygonWrap::ptpl;

VtkQuadraticPolygonWrap::VtkQuadraticPolygonWrap()
{ }

VtkQuadraticPolygonWrap::VtkQuadraticPolygonWrap(vtkSmartPointer<vtkQuadraticPolygon> _native)
{ native = _native; }

VtkQuadraticPolygonWrap::~VtkQuadraticPolygonWrap()
{ }

void VtkQuadraticPolygonWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkNonLinearCellWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkNonLinearCellWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkQuadraticPolygonWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkQuadraticPolygon").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("QuadraticPolygon").ToLocalChecked(),tpl->GetFunction());
}

void VtkQuadraticPolygonWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

	Nan::SetPrototypeMethod(tpl, "GetNumberOfEdges", GetNumberOfEdges);
	Nan::SetPrototypeMethod(tpl, "getNumberOfEdges", GetNumberOfEdges);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFaces", GetNumberOfFaces);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFaces", GetNumberOfFaces);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsPrimaryCell", IsPrimaryCell);
	Nan::SetPrototypeMethod(tpl, "isPrimaryCell", IsPrimaryCell);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "NonDegenerateTriangulate", NonDegenerateTriangulate);
	Nan::SetPrototypeMethod(tpl, "nonDegenerateTriangulate", NonDegenerateTriangulate);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Triangulate", Triangulate);
	Nan::SetPrototypeMethod(tpl, "triangulate", Triangulate);

}

void VtkQuadraticPolygonWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuadraticPolygon> native = vtkSmartPointer<vtkQuadraticPolygon>::New();
		VtkQuadraticPolygonWrap* obj = new VtkQuadraticPolygonWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkQuadraticPolygonWrap::GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadraticPolygonWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadraticPolygonWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuadraticPolygonWrap::GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCellWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellWrap *w = new VtkCellWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadraticPolygonWrap::GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
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
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkCellWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellWrap *w = new VtkCellWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadraticPolygonWrap::GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadraticPolygonWrap::GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadraticPolygonWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
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

void VtkQuadraticPolygonWrap::IsPrimaryCell(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsPrimaryCell();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuadraticPolygonWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	vtkQuadraticPolygon * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkQuadraticPolygonWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuadraticPolygonWrap *w = new VtkQuadraticPolygonWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuadraticPolygonWrap::NonDegenerateTriangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->NonDegenerateTriangulate(
			(vtkIdList *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadraticPolygonWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuadraticPolygon * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkQuadraticPolygonWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuadraticPolygonWrap *w = new VtkQuadraticPolygonWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuadraticPolygonWrap::Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuadraticPolygonWrap *wrapper = ObjectWrap::Unwrap<VtkQuadraticPolygonWrap>(info.Holder());
	vtkQuadraticPolygon *native = (vtkQuadraticPolygon *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Triangulate(
			(vtkIdList *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkIdListWrap *a1 = ObjectWrap::Unwrap<VtkIdListWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
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

