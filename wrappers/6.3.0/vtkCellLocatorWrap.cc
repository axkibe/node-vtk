/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractCellLocatorWrap.h"
#include "vtkCellLocatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdListWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellLocatorWrap::ptpl;

VtkCellLocatorWrap::VtkCellLocatorWrap()
{ }

VtkCellLocatorWrap::VtkCellLocatorWrap(vtkSmartPointer<vtkCellLocator> _native)
{ native = _native; }

VtkCellLocatorWrap::~VtkCellLocatorWrap()
{ }

void VtkCellLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellLocator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellLocator").ToLocalChecked(), ConstructorGetter);
}

void VtkCellLocatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellLocatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractCellLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractCellLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "BuildLocatorIfNeeded", BuildLocatorIfNeeded);
	Nan::SetPrototypeMethod(tpl, "buildLocatorIfNeeded", BuildLocatorIfNeeded);

	Nan::SetPrototypeMethod(tpl, "BuildLocatorInternal", BuildLocatorInternal);
	Nan::SetPrototypeMethod(tpl, "buildLocatorInternal", BuildLocatorInternal);

	Nan::SetPrototypeMethod(tpl, "FindCellsAlongLine", FindCellsAlongLine);
	Nan::SetPrototypeMethod(tpl, "findCellsAlongLine", FindCellsAlongLine);

	Nan::SetPrototypeMethod(tpl, "ForceBuildLocator", ForceBuildLocator);
	Nan::SetPrototypeMethod(tpl, "forceBuildLocator", ForceBuildLocator);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetCells", GetCells);
	Nan::SetPrototypeMethod(tpl, "getCells", GetCells);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBuckets", GetNumberOfBuckets);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBuckets", GetNumberOfBuckets);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCellsPerBucket", GetNumberOfCellsPerBucket);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCellsPerBucket", GetNumberOfCellsPerBucket);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfCellsPerBucket", SetNumberOfCellsPerBucket);
	Nan::SetPrototypeMethod(tpl, "setNumberOfCellsPerBucket", SetNumberOfCellsPerBucket);

	ptpl.Reset( tpl );
}

void VtkCellLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellLocator> native = vtkSmartPointer<vtkCellLocator>::New();
		VtkCellLocatorWrap* obj = new VtkCellLocatorWrap(native);
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

void VtkCellLocatorWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkCellLocatorWrap::BuildLocatorIfNeeded(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocatorIfNeeded();
}

void VtkCellLocatorWrap::BuildLocatorInternal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocatorInternal();
}

void VtkCellLocatorWrap::FindCellsAlongLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->FindCellsAlongLine(
						(double *)(a0->Buffer()->GetContents().Data()),
						(double *)(a1->Buffer()->GetContents().Data()),
						info[2]->NumberValue(),
						(vtkIdList *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->FindCellsAlongLine(
						(double *)(a0->Buffer()->GetContents().Data()),
						b1,
						info[2]->NumberValue(),
						(vtkIdList *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
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
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->FindCellsAlongLine(
						b0,
						b1,
						info[2]->NumberValue(),
						(vtkIdList *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
		else if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->FindCellsAlongLine(
						b0,
						(double *)(a1->Buffer()->GetContents().Data()),
						info[2]->NumberValue(),
						(vtkIdList *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorWrap::ForceBuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ForceBuildLocator();
}

void VtkCellLocatorWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkCellLocatorWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateRepresentation(
				info[0]->Int32Value(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorWrap::GetCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkIdList * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCells(
			info[0]->Int32Value()
		);
			VtkIdListWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIdListWrap *w = new VtkIdListWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellLocatorWrap::GetNumberOfBuckets(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfBuckets();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellLocatorWrap::GetNumberOfCellsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCellsPerBucket();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
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

void VtkCellLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	vtkCellLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkCellLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellLocatorWrap *w = new VtkCellLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkCellLocatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellLocatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellLocatorWrap *w = new VtkCellLocatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLocatorWrap::SetNumberOfCellsPerBucket(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkCellLocatorWrap>(info.Holder());
	vtkCellLocator *native = (vtkCellLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfCellsPerBucket(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

