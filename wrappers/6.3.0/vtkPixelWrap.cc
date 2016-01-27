/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCellWrap.h"
#include "vtkPixelWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPointsWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPixelWrap::ptpl;

VtkPixelWrap::VtkPixelWrap()
{ }

VtkPixelWrap::VtkPixelWrap(vtkSmartPointer<vtkPixel> _native)
{ native = _native; }

VtkPixelWrap::~VtkPixelWrap()
{ }

void VtkPixelWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPixel").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Pixel").ToLocalChecked(), ConstructorGetter);
}

void VtkPixelWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPixelWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCellWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCellWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPixelWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

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

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Triangulate", Triangulate);
	Nan::SetPrototypeMethod(tpl, "triangulate", Triangulate);

	ptpl.Reset( tpl );
}

void VtkPixelWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPixel> native = vtkSmartPointer<vtkPixel>::New();
		VtkPixelWrap* obj = new VtkPixelWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPixelWrap::GetCellDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPixelWrap::GetCellType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCellType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPixelWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPixelWrap::GetEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
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

void VtkPixelWrap::GetFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
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

void VtkPixelWrap::GetNumberOfEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfEdges();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPixelWrap::GetNumberOfFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPixelWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
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

void VtkPixelWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
	vtkPixel * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPixelWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPixelWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPixelWrap *w = new VtkPixelWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPixelWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPixel * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPixelWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPixelWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPixelWrap *w = new VtkPixelWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPixelWrap::Triangulate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPixelWrap *wrapper = ObjectWrap::Unwrap<VtkPixelWrap>(info.Holder());
	vtkPixel *native = (vtkPixel *)wrapper->native.GetPointer();
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

