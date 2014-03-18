#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
	auto listener = EventListenerKeyboard::create();
	listener->onKeyPressed = CC_CALLBACK_2( HelloWorld::onKeyPressed, this );
	listener->onKeyReleased = CC_CALLBACK_2( HelloWorld::onKeyReleased, this );
	_eventDispatcher->addEventListenerWithSceneGraphPriority( listener, this );


	Sprite *Map = Sprite::create( "test.png" );
	Map->setAnchorPoint( ccp( 0, 0 ) );
	
	addChild( Map );


	Sprite *Dirt = Sprite::create( "dirt.png" );
	Dirt->setAnchorPoint( ccp( 0, 0 ) );

	cocos2d::BlendFunc blend = { GL_SRC_ALPHA, GL_ZERO };
	Dirt->setBlendFunc( blend );

	addChild( Dirt );


	Sprite *s = Sprite::create( "ts.png" );
	s->setPosition( ccp( 100, 100 ) );

	cocos2d::BlendFunc blend2 = { GL_SRC_ALPHA, GL_ONE };
	s->setBlendFunc( blend2 );

	addChild( s );

	//Sprite *sp = Sprite::create( "ts.png" );
	//sp->setPosition( ccp( 300, 300 ) );
	//sp->setTag( 100 );
	//addChild( sp );
	//
	//ClippingNode *clipper = cocos2d::ClippingNode::create();
	//clipper->setAlphaThreshold( 0.1f );
	//clipper->setInverted( true );
	//clipper->setTag( 101 );
	//
	//clipper->setAnchorPoint( ccp( 0, 0 ) );
	//clipper->setPosition( ccp( 0, 0 ) );
	//clipper->setStencil( sp );
	//addChild( clipper );
	//
	//
	//auto shape = DrawNode::create();
	//static Point rect[ 4 ];
	//rect[ 0 ] = Point( 0, 0 );
	//rect[ 1 ] = Point( 100, 0 );
	//rect[ 2 ] = Point( 100, 100 );
	//rect[ 3 ] = Point( 0, 100 );
	//
	//static Color4F green( 0, 1, 0, 1 );
	//shape->drawPolygon( rect, 3, green, 0, green );
	//
	//clipper->addChild( shape );
}

void HelloWorld::onKeyPressed( EventKeyboard::KeyCode keyCode, Event* event )
{
	switch ( keyCode )
	{

	}
}

void HelloWorld::onKeyReleased( EventKeyboard::KeyCode keyCode, Event* event )
{
	switch ( keyCode )
	{
	//case EventKeyboard::KeyCode::KEY_LEFT_ARROW:
	//	TestPNG->setPositionX( TestPNG->getPositionX() - 10 );
	//	break;
	//case EventKeyboard::KeyCode::KEY_RIGHT_ARROW:
	//	TestPNG->setPositionX( TestPNG->getPositionX() + 10 );
	//	break;
	//case EventKeyboard::KeyCode::KEY_DOWN_ARROW:
	//	TestPNG->setPositionY( TestPNG->getPositionY() - 10 );
	//	break;
	//case EventKeyboard::KeyCode::KEY_UP_ARROW:
	//	TestPNG->setPositionY( TestPNG->getPositionY() + 10 );
	//	break;
	}
}