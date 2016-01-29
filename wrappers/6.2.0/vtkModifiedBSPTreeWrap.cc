/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractCellLocatorWrap.h"
#include "vtkModifiedBSPTreeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPointsWrap.h"
#include "vtkIdListWrap.h"
#include "vtkIdListCollectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkModifiedBSPTreeWrap::ptpl;

VtkModifiedBSPTreeWrap::VtkModifiedBSPTreeWrap()
{ }

VtkModifiedBSPTreeWrap::VtkModifiedBSPTreeWrap(vtkSmartPointer<vtkModifiedBSPTree> _native)
{ native = _native; }

VtkModifiedBSPTreeWrap::~VtkModifiedBSPTreeWrap()
{ }

void VtkModifiedBSPTreeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkModifiedBSPTree").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ModifiedBSPTree").ToLocalChecked(), ConstructorGetter);
}

void VtkModifiedBSPTreeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkModifiedBSPTreeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractCellLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractCellLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkModifiedBSPTreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentationLeafs", GenerateRepresentationLeafs);
	Nan::SetPrototypeMethod(tpl, "generateRepresentationLeafs", GenerateRepresentationLeafs);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLeafNodeCellInformation", GetLeafNodeCellInformation);
	Nan::SetPrototypeMethod(tpl, "getLeafNodeCellInformation", GetLeafNodeCellInformation);

	Nan::SetPrototypeMethod(tpl, "IntersectWithLine", IntersectWithLine);
	Nan::SetPrototypeMethod(tpl, "intersectWithLine", IntersectWithLine);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkModifiedBSPTreeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkModifiedBSPTree> native = vtkSmartPointer<vtkModifiedBSPTree>::New();
		VtkModifiedBSPTreeWrap* obj = new VtkModifiedBSPTreeWrap(native);
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

void VtkModifiedBSPTreeWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkModifiedBSPTreeWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkModifiedBSPTreeWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
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

void VtkModifiedBSPTreeWrap::GenerateRepresentationLeafs(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPolyDataWrap *a0 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GenerateRepresentationLeafs(
			(vtkPolyData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkModifiedBSPTreeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkModifiedBSPTreeWrap::GetLeafNodeCellInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	vtkIdListCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafNodeCellInformation();
		VtkIdListCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdListCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListCollectionWrap *w = new VtkIdListCollectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkModifiedBSPTreeWrap::IntersectWithLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[3]))
				{
					VtkPointsWrap *a3 = ObjectWrap::Unwrap<VtkPointsWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[4]))
					{
						VtkIdListWrap *a4 = ObjectWrap::Unwrap<VtkIdListWrap>(info[4]->ToObject());
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->IntersectWithLine(
							b0,
							b1,
							info[2]->NumberValue(),
							(vtkPoints *) a3->native.GetPointer(),
							(vtkIdList *) a4->native.GetPointer()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
			else if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdListWrap *a3 = ObjectWrap::Unwrap<VtkIdListWrap>(info[3]->ToObject());
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->IntersectWithLine(
						b0,
						b1,
						(vtkPoints *) a2->native.GetPointer(),
						(vtkIdList *) a3->native.GetPointer()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkModifiedBSPTreeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
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

void VtkModifiedBSPTreeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	vtkModifiedBSPTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkModifiedBSPTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkModifiedBSPTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkModifiedBSPTreeWrap *w = new VtkModifiedBSPTreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkModifiedBSPTreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkModifiedBSPTreeWrap *wrapper = ObjectWrap::Unwrap<VtkModifiedBSPTreeWrap>(info.Holder());
	vtkModifiedBSPTree *native = (vtkModifiedBSPTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkModifiedBSPTree * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkModifiedBSPTreeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkModifiedBSPTreeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkModifiedBSPTreeWrap *w = new VtkModifiedBSPTreeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

