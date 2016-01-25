/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkDataSetWrap.h"
#include "vtkHyperOctreeWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkHyperOctreeCursorWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkHyperOctreePointsGrabberWrap.h"
#include "vtkDataSetAttributesWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHyperOctreeWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeWrap::ptpl;

VtkHyperOctreeWrap::VtkHyperOctreeWrap()
{ }

VtkHyperOctreeWrap::VtkHyperOctreeWrap(vtkSmartPointer<vtkHyperOctree> _native)
{ native = _native; }

VtkHyperOctreeWrap::~VtkHyperOctreeWrap()
{ }

void VtkHyperOctreeWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkHyperOctreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkHyperOctree").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HyperOctree").ToLocalChecked(),tpl->GetFunction());
}

void VtkHyperOctreeWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "CollapseTerminalNode", CollapseTerminalNode);
	Nan::SetPrototypeMethod(tpl, "collapseTerminalNode", CollapseTerminalNode);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DIMENSION", DIMENSION);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetDualGridFlag", GetDualGridFlag);
	Nan::SetPrototypeMethod(tpl, "getDualGridFlag", GetDualGridFlag);

	Nan::SetPrototypeMethod(tpl, "GetLeafData", GetLeafData);
	Nan::SetPrototypeMethod(tpl, "getLeafData", GetLeafData);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnEdge", GetPointsOnEdge);
	Nan::SetPrototypeMethod(tpl, "getPointsOnEdge", GetPointsOnEdge);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnEdge2D", GetPointsOnEdge2D);
	Nan::SetPrototypeMethod(tpl, "getPointsOnEdge2D", GetPointsOnEdge2D);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnFace", GetPointsOnFace);
	Nan::SetPrototypeMethod(tpl, "getPointsOnFace", GetPointsOnFace);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnParentEdge", GetPointsOnParentEdge);
	Nan::SetPrototypeMethod(tpl, "getPointsOnParentEdge", GetPointsOnParentEdge);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnParentEdge2D", GetPointsOnParentEdge2D);
	Nan::SetPrototypeMethod(tpl, "getPointsOnParentEdge2D", GetPointsOnParentEdge2D);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LEVELS", LEVELS);

	Nan::SetPrototypeMethod(tpl, "NewCellCursor", NewCellCursor);
	Nan::SetPrototypeMethod(tpl, "newCellCursor", NewCellCursor);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SIZES", SIZES);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimension", SetDimension);
	Nan::SetPrototypeMethod(tpl, "setDimension", SetDimension);

	Nan::SetPrototypeMethod(tpl, "SetDualGridFlag", SetDualGridFlag);
	Nan::SetPrototypeMethod(tpl, "setDualGridFlag", SetDualGridFlag);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "SubdivideLeaf", SubdivideLeaf);
	Nan::SetPrototypeMethod(tpl, "subdivideLeaf", SubdivideLeaf);

}

void VtkHyperOctreeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctree> native = vtkSmartPointer<vtkHyperOctree>::New();
		VtkHyperOctreeWrap* obj = new VtkHyperOctreeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperOctreeWrap::CollapseTerminalNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CollapseTerminalNode(
			(vtkHyperOctreeCursor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::DIMENSION(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DIMENSION();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperOctreeWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkHyperOctree * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkHyperOctreeWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
		vtkHyperOctree * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkHyperOctreeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetDualGridFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDualGridFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetLeafData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkDataSetAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafData();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkDataSetAttributesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetAttributesWrap *w = new VtkDataSetAttributesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetPointsOnEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject())
						{
							VtkHyperOctreePointsGrabberWrap *a5 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[5]->ToObject());
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->GetPointsOnEdge(
								(vtkHyperOctreeCursor *) a0->native.GetPointer(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								(vtkHyperOctreePointsGrabber *) a5->native.GetPointer()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetPointsOnEdge2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnEdge2D(
						(vtkHyperOctreeCursor *) a0->native.GetPointer(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetPointsOnFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnFace(
						(vtkHyperOctreeCursor *) a0->native.GetPointer(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetPointsOnParentEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject())
						{
							VtkHyperOctreePointsGrabberWrap *a5 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[5]->ToObject());
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->GetPointsOnParentEdge(
								(vtkHyperOctreeCursor *) a0->native.GetPointer(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								(vtkHyperOctreePointsGrabber *) a5->native.GetPointer()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetPointsOnParentEdge2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnParentEdge2D(
						(vtkHyperOctreeCursor *) a0->native.GetPointer(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkHyperOctreeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
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

void VtkHyperOctreeWrap::LEVELS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LEVELS();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationIntegerKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::NewCellCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkHyperOctreeCursor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewCellCursor();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHyperOctreeCursorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeCursorWrap *w = new VtkHyperOctreeCursorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkHyperOctree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHyperOctreeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::SIZES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SIZES();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkInformationDoubleVectorKeyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctree * r;
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
			Nan::New<v8::Function>(VtkHyperOctreeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetDualGridFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDualGridFlag(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSize(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SubdivideLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SubdivideLeaf(
			(vtkHyperOctreeCursor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
